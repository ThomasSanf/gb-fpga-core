// gameboy_sim.cpp - SDL frontend for GameBoySoC
#include <SDL2/SDL.h>
#include <verilated.h>
#include "VGameBoySoC.h"
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <cstring>
#include <fstream>   // *** PATCH ***
using namespace std;

#define GB_WIDTH 160
#define GB_HEIGHT 144
#define SCALE_FACTOR 4
#define WINDOW_WIDTH (GB_WIDTH * SCALE_FACTOR)
#define WINDOW_HEIGHT (GB_HEIGHT * SCALE_FACTOR)

const uint32_t PALETTE_GREEN[4] = {
    0xFF9BBC0F, 0xFF8BAC0F, 0xFF306230, 0xFF0F380F
};

const uint32_t PALETTE_GRAY[4] = {
    0xFFFFFFFF, 0xFFAAAAAA, 0xFF555555, 0xFF000000
};

class GameBoySim {
private:
    VGameBoySoC* top;
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    uint32_t framebuffer[GB_WIDTH * GB_HEIGHT];
    uint64_t main_time;
    uint64_t cycle_count;
    bool quit;
    bool use_green_palette;

public:

    // ============================================================
    //        *** PATCH: LOAD A REAL .GB ROM INTO THE FPGA ***
    // ============================================================

    void loadROM(const char* path) {
        cout << "Loading ROM: " << path << endl;

        ifstream rom(path, ios::binary);
        if (!rom.is_open()) {
            cerr << "ERROR: Cannot open ROM file!" << endl;
            exit(1);
        }

        uint32_t addr = 0;
        uint8_t byte;

        while (rom.read((char*)&byte, 1)) {
            top->io_extRomLoadAddr = addr;
            top->io_extRomLoadData = byte;
            top->io_extRomLoadEn   = 1;

            // One eval per write
            top->eval();

            addr++;
        }

        top->io_extRomLoadEn = 0;

        cout << "Loaded " << dec << addr << " bytes into cartridge ROM." << endl;
    }

    // ============================================================
    // Constructor
    // ============================================================

    GameBoySim() : main_time(0), cycle_count(0), quit(false), use_green_palette(true) {
        Verilated::commandArgs(0, (const char**)nullptr);
        top = new VGameBoySoC;

        // *** PATCH: load GB ROM before reset ***
        loadROM("roms/pkm_red.gb");   // <-- PUT YOUR ROM HERE

        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            std::cerr << "SDL init failed: " << SDL_GetError() << std::endl;
            exit(1);
        }

        window = SDL_CreateWindow("Game Boy FPGA", SDL_WINDOWPOS_UNDEFINED,
            SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

        if (!window) {
            std::cerr << "Window creation failed: " << SDL_GetError() << std::endl;
            exit(1);
        }

        renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        if (!renderer) {
            std::cerr << "Renderer creation failed: " << SDL_GetError() << std::endl;
            exit(1);
        }

        texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
            SDL_TEXTUREACCESS_STREAMING, GB_WIDTH, GB_HEIGHT);

        if (!texture) {
            std::cerr << "Texture creation failed: " << SDL_GetError() << std::endl;
            exit(1);
        }

        for (int i = 0; i < GB_WIDTH * GB_HEIGHT; i++) {
            framebuffer[i] = PALETTE_GREEN[0];
        }

        // Reset after ROM load
        top->reset = 1;
        for (int i = 0; i < 20; i++) tick();
        top->reset = 0;

        std::cout << "╔═══════════════════════════════════════════╗" << std::endl;
        std::cout << "║   Game Boy FPGA Emulator Ready!          ║" << std::endl;
        std::cout << "╚═══════════════════════════════════════════╝" << std::endl;
        std::cout << std::endl;
    }

    ~GameBoySim() {
        SDL_DestroyTexture(texture);
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        delete top;
    }
    
    void tick() {
        top->clock = 1;
        top->eval();
        main_time++;
        
        top->clock = 0;
        top->eval();
        main_time++;
        cycle_count++;
        
        if (top->io_pixelValid) {
            uint8_t x = top->io_pixelX;
            uint8_t y = top->io_pixelY;
            uint8_t color = top->io_pixelColor & 0x3;
            
            if (x < GB_WIDTH && y < GB_HEIGHT) {
                const uint32_t* palette = use_green_palette ? PALETTE_GREEN : PALETTE_GRAY;
                framebuffer[y * GB_WIDTH + x] = palette[color];
            }
        }
    }
    
    void handleInput() {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            } else if (event.type == SDL_KEYDOWN) {
                switch (event.key.keysym.sym) {
                    case SDLK_ESCAPE: 
                        quit = true; 
                        break;
                    case SDLK_p: 
                        use_green_palette = !use_green_palette;
                        std::cout << "Palette: " << (use_green_palette ? "DMG Green" : "Grayscale") << std::endl;
                        break;
                    case SDLK_r:
                        std::cout << "Resetting..." << std::endl;
                        top->reset = 1;
                        for (int i = 0; i < 20; i++) tick();
                        top->reset = 0;
                        break;
                    case SDLK_d:
                        printDebugInfo();
                        break;
                }
            }
        }
    }
    
    void printDebugInfo() {
        std::cout << "╔═════════════ DEBUG INFO ═════════════╗" << std::endl;
        std::cout << "║ PC:    0x" << std::hex << std::setw(4) << std::setfill('0') 
                  << (int)top->io_dbg_pc << std::dec << "                          ║" << std::endl;
        std::cout << "║ IR:    0x" << std::hex << std::setw(2) << std::setfill('0') 
                  << (int)top->io_dbg_IR << std::dec << "                            ║" << std::endl;
        std::cout << "║ A: 0x" << std::hex << std::setw(2) << std::setfill('0') 
                  << (int)top->io_dbg_a << "  F: 0x" << std::setw(2) << (int)top->io_dbg_f << std::dec 
                  << "                   ║" << std::endl;
        std::cout << "║ B: 0x" << std::hex << std::setw(2) << std::setfill('0') 
                  << (int)top->io_dbg_b << "  C: 0x" << std::setw(2) << (int)top->io_dbg_c << std::dec 
                  << "                   ║" << std::endl;
        std::cout << "║ D: 0x" << std::hex << std::setw(2) << std::setfill('0') 
                  << (int)top->io_dbg_d << "  E: 0x" << std::setw(2) << (int)top->io_dbg_e << std::dec 
                  << "                   ║" << std::endl;
        std::cout << "║ H: 0x" << std::hex << std::setw(2) << std::setfill('0') 
                  << (int)top->io_dbg_h << "  L: 0x" << std::setw(2) << (int)top->io_dbg_l << std::dec 
                  << "                   ║" << std::endl;
        std::cout << "║ LY:    " << std::dec << (int)top->io_dbg_ly << "                              ║" << std::endl;
        std::cout << "║ Cycles: " << cycle_count << "                       ║" << std::endl;
        std::cout << "╚═════════════════════════════════════╝" << std::endl;
    }
    
    void render() {
        SDL_UpdateTexture(texture, NULL, framebuffer, GB_WIDTH * sizeof(uint32_t));
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);
    }
    
    void run() {
        const int CYCLES_PER_FRAME = 70224;
        uint32_t last_frame_time = SDL_GetTicks();
        int cycles_this_frame = 0;
        uint8_t last_ly = 0;
        
        std::cout << "Controls:" << std::endl;
        std::cout << "  ESC - Quit" << std::endl;
        std::cout << "  P   - Toggle palette" << std::endl;
        std::cout << "  R   - Reset" << std::endl;
        std::cout << "  D   - Debug info" << std::endl;
        std::cout << std::endl;
        std::cout << "Starting emulation..." << std::endl;
        
        while (!quit) {
            handleInput();
            
            bool frame_complete = false;
            while (!frame_complete && cycles_this_frame < CYCLES_PER_FRAME * 2) {
                tick();
                cycles_this_frame++;
                
                uint8_t current_ly = top->io_dbg_ly;
                if (current_ly == 0 && last_ly == 153) {
                    frame_complete = true;
                }
                last_ly = current_ly;
            }
            
            if (frame_complete) {
                render();
                cycles_this_frame = 0;
                
                uint32_t current_time = SDL_GetTicks();
                uint32_t frame_time = current_time - last_frame_time;
                if (frame_time < 16) {
                    SDL_Delay(16 - frame_time);
                }
                last_frame_time = SDL_GetTicks();
                
                static int frame_count = 0;
                static uint32_t last_debug = 0;
                frame_count++;
                if (current_time - last_debug >= 1000) {
                    float fps = 1000.0f * frame_count / (current_time - last_debug);
                    std::cout << "FPS: " << std::fixed << std::setprecision(1) << fps
                              << " | PC: 0x" << std::hex << std::setw(4) << std::setfill('0') 
                              << (int)top->io_dbg_pc << std::dec
                              << " | Cycles: " << cycle_count
                              << std::endl;
                    frame_count = 0;
                    last_debug = current_time;
                }
            }
        }
        
        std::cout << std::endl;
        std::cout << "Total cycles: " << cycle_count << std::endl;
    }
};

int main(int argc, char* argv[]) {
    GameBoySim sim;
    sim.run();
    return 0;
}
