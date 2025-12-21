// framebuffer.cpp
#include "framebuffer.hpp"
#include <iostream>
#include <algorithm>

Framebuffer::Framebuffer(int width, int height) {
    this->width = width;
    this->height = height;
    this->buffer.resize(width * height, palette[0]);  // Initialize to white
}

void Framebuffer::update(bool hblank, bool vblank) {
    // VBlank rising edge - start of new frame
    if (vblank && !prev_vblank) {
        y = 0;
        x = 0;
        // Debug first frame
        static int frame_count = 0;
        if (frame_count < 3) {
          // std::cout << "[Framebuffer] Frame " << frame_count << " complete\n";
            frame_count++;
        }
    }
    // HBlank rising edge - end of scanline
    else if (!vblank && hblank && !prev_hblank) {
        y += 1;
        x = 0;
        // Debug first scanline
        static bool printed = false;
        if (!printed && y == 1) {
          //  std::cout << "[Framebuffer] First scanline complete\n";
            printed = true;
        }
    }

    prev_hblank = hblank;
    prev_vblank = vblank;
}

void Framebuffer::clear() {
    std::fill(buffer.begin(), buffer.end(), palette[0]);
    x = 0;
    y = 0;
}

void Framebuffer::pushPixel(uint8_t color) {
    if (x < width && y < height) {
        int index = y * width + x;
        buffer[index] = palette[color & 0x3];

        // Debug first few pixels
        static int pixel_count = 0;
        if (pixel_count < 20) {
         /*  std::cout << "[Framebuffer] Pixel at (" << x << ", " << y
                     << ") = color " << (int)(color & 0x3) << "\n";*/
            pixel_count++;
        }
    }
    x += 1;
}

std::vector<uint32_t>& Framebuffer::getBuffer() {
    return buffer;
}