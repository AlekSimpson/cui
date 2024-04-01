#pragma once
#ifndef COLOR_H
#define COLOR_H

#include <SDL2/SDL.h>

class Color {
public:
  Uint8 red;
  Uint8 green;
  Uint8 blue;

  Color();
  Color(int, int, int);

  SDL_Color getSDL();
};

#endif
