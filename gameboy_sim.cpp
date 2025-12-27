// gameboy_sim.cpp - SDL frontend for GameBoySoC (FIXED RESET SEQUENCE)

#include <SDL2/SDL.h>
#include <verilated.h>
#include "VGameBoySoC.h"
#include "VGameBoySoC___024root.h"  // CRITICAL: For direct memory access
#include "framebuffer.hpp"

#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cstring>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

#define GB_WIDTH 160
#define GB_HEIGHT 144
#define SCALE_FACTOR 4
#define WINDOW_WIDTH (GB_WIDTH * SCALE_FACTOR)
#define WINDOW_HEIGHT (GB_HEIGHT * SCALE_FACTOR)

class GameBoySim {
private:
    VGameBoySoC* top;
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    Framebuffer framebuffer;

    uint64_t main_time;
    uint64_t cycle_count;
    bool quit;
    uint32_t pixels_this_frame;

public:

// ------------------------------------------------------------
// ROM LOADER — SAFE, LINEAR, NO MIRRORING
// ------------------------------------------------------------
void loadROM(const char* path) {
    cout << "Loading ROM: " << path << endl;

    ifstream rom(path, ios::binary);
    if (!rom.is_open()) {
        cerr << "ERROR: Cannot open ROM file!" << endl;
        exit(1);
    }

    rom.seekg(0, ios::end);
    size_t rom_size = rom.tellg();
    rom.seekg(0, ios::beg);

    cout << "Read " << rom_size << " bytes from file" << endl;

    auto& hwRom = top->rootp->GameBoySoC__DOT__memory__DOT__rom;
    size_t hwRomSize = sizeof(hwRom) / sizeof(hwRom[0]);

    if (rom_size > hwRomSize) {
        cerr << "ERROR: ROM too large for hardware ROM memory!" << endl;
        exit(1);
    }

    rom.read(
        reinterpret_cast<char*>(&hwRom[0]),
        rom_size
    );

    rom.close();

    cout << "ROM loaded linearly at [0x0000 .. 0x"
         << hex << rom_size - 1 << dec << "]" << endl;
}


    // ------------------------------------------------------------
    // CLOCK TICK
    // ------------------------------------------------------------
    void tick() {
        top->clock = 1;
        top->eval();
        main_time++;

        top->clock = 0;
        top->eval();
        main_time++;
        cycle_count++;

        framebuffer.update(top->io_hblank, top->io_vblank);

        if (top->io_pixelValid && top->io_lcdEnable) {
            framebuffer.pushPixel(top->io_pixelColor);
            pixels_this_frame++;
        }

        static bool prev_lcd_enabled = true;
        if (prev_lcd_enabled && !top->io_lcdEnable) {
            framebuffer.clear();
        }
        prev_lcd_enabled = top->io_lcdEnable;
    }

    GameBoySim()
        : framebuffer(GB_WIDTH, GB_HEIGHT),
          main_time(0),
          cycle_count(0),
          quit(false),
          pixels_this_frame(0) {

        const char* argv[] = {"sim"};
        Verilated::commandArgs(1, argv);

        top = new VGameBoySoC;

        cout << "╔════════════════════════════════════════════════╗" << endl;
        cout << "║   Game Boy Hardware Initialization Sequence   ║" << endl;
        cout << "╚════════════════════════════════════════════════╝" << endl;

        // ============================================================
        // STEP 1: LOAD ROM (instant memcpy, before any clocking)
        // ============================================================
        cout << "Step 1: Loading cartridge ROM (instant memcpy)..." << endl;
        loadROM("roms/03-opsphl.gb");

        // ============================================================
        // STEP 2: ASSERT RESET
        // ============================================================
        cout << endl << "Step 2: Asserting reset..." << endl;
        top->reset = 1;
        top->clock = 0;
        top->io_extRomLoadEn = 0;
        top->eval();

        // ============================================================
        // STEP 3: CLOCK CYCLES WITH RESET HIGH
        //         This initializes RegInit values (bootRomEnable=true)
        // ============================================================
        cout << "Step 3: Clocking with reset high (initializing registers)..." << endl;
        for (int i = 0; i < 4; i++) {
            top->clock = 0; top->eval();
            top->clock = 1; top->eval();
        }

        // ============================================================
        // STEP 4: RELEASE RESET - CPU can start with ROM already loaded!
        // ============================================================
        cout << "Step 4: Releasing reset..." << endl;
        top->reset = 0;
        top->eval();  // Don't clock yet

        cout << "✅ Boot ROM ENABLED, cartridge ROM loaded, CPU ready" << endl;

        // ============================================================
        // STEP 5: READY TO START - Don't clock yet, let main loop do it!
        // ============================================================
        cout << "Step 5: CPU ready to start..." << endl;
        // Don't clock here - let the main loop start execution
        // Otherwise we'll execute instructions during init

        cout << "✅ CPU ready to execute from boot ROM at PC=0x0000" << endl;

        // ============================================================
        // SDL INITIALIZATION
        // ============================================================
        cout << endl << "Step 5: Initializing SDL..." << endl;

        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            cerr << "SDL init failed: " << SDL_GetError() << endl;
            exit(1);
        }

        window = SDL_CreateWindow(
            "Game Boy FPGA",
            SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED,
            WINDOW_WIDTH,
            WINDOW_HEIGHT,
            SDL_WINDOW_SHOWN
        );

        if (!window) {
            cerr << "Window creation failed: " << SDL_GetError() << endl;
            exit(1);
        }

        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        if (!renderer) {
            cerr << "Renderer creation failed: " << SDL_GetError() << endl;
            exit(1);
        }

        texture = SDL_CreateTexture(
            renderer,
            SDL_PIXELFORMAT_ARGB8888,
            SDL_TEXTUREACCESS_STREAMING,
            GB_WIDTH,
            GB_HEIGHT
        );

        if (!texture) {
            cerr << "Texture creation failed: " << SDL_GetError() << endl;
            exit(1);
        }

        cout << "✅ SDL initialized" << endl;
        cout << endl << "╔════════════════════════════════════════════════╗" << endl;
        cout << "║   Starting Game Boy Boot ROM Execution!       ║" << endl;
        cout << "║   CPU will start at PC=0x0000 (boot ROM)      ║" << endl;
        cout << "╚════════════════════════════════════════════════╝" << endl << endl;
    }

    ~GameBoySim() {
        SDL_DestroyTexture(texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        delete top;
    }

    // ------------------------------------------------------------
    // MAIN LOOP
    // ------------------------------------------------------------
    void run() {
        const int CYCLES_PER_FRAME = 70224;
        uint32_t last_frame_time = SDL_GetTicks();
        uint8_t last_ly = 0;

        while (!quit) {
            SDL_Event event;
            while (SDL_PollEvent(&event)) {
                if (event.type == SDL_QUIT) quit = true;
            }

            bool frame_complete = false;
            int cycles_this_frame = 0;

            while (!frame_complete && cycles_this_frame < CYCLES_PER_FRAME * 2) {
                tick();
                cycles_this_frame++;

                uint8_t ly = top->io_dbg_ly;
                if (ly == 0 && last_ly == 153) frame_complete = true;
                last_ly = ly;
            }

            render();

            uint32_t now = SDL_GetTicks();
            if (now - last_frame_time < 16)
                SDL_Delay(16 - (now - last_frame_time));
            last_frame_time = now;
        }

        cout << endl << "Total cycles: " << cycle_count << endl;
    }

    void render() {
        auto& buffer = framebuffer.getBuffer();
        SDL_UpdateTexture(texture, NULL, buffer.data(),
                          GB_WIDTH * sizeof(uint32_t));
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }
};

int main(int argc, char* argv[]) {
    GameBoySim sim;
    sim.run();
    return 0;
}