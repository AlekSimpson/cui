#include <SDL2/SDL.h>
#include "../include/Color.h"

Color::Color() {
  red = 255;
  blue = 255;
  green = 255;
}

Color::Color(int r, int g, int b) {
  red = r;
  green = g;
  blue = b;
}

SDL_Color Color::getSDL() {
  return (SDL_Color){red, green, blue};
}
