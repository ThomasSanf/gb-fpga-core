// framebuffer.hpp
#pragma once

#include <vector>
#include <cstdint>

class Framebuffer {
public:
    Framebuffer(int width, int height);

    void update(bool hblank, bool vblank);
    void clear();
    void pushPixel(uint8_t color);  // For 2-bit Game Boy color

    std::vector<uint32_t>& getBuffer();

private:
    int width;
    int height;

    std::vector<uint32_t> buffer;

    bool prev_vblank = false;
    bool prev_hblank = false;

    int x = 0;
    int y = 0;

    // Game Boy palette
    const uint32_t palette[4] = {
        0xFFFFFFFF, // white
        0xFFAAAAAA, // light gray
        0xFF555555, // dark gray
        0xFF000000  // black
    };
};