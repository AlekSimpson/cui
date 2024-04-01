#pragma once
#ifndef APPSTATE_H
#define APPSTATE_H

#include <cstdlib>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>

#include "Color.h"

using namespace std;

typedef struct {
  Color background;
  Color secondary;
  Color foreground;
} ColorPalette;

class AppState {
private:
  bool programQuit;
  Scene* scenes;
  int currScene;
  ColorPalette colors;
  string FONTPATH;
  FONT

  int WINDOW_WIDTH;
  int WINDOW_HEIGHT;
  int FPS;
public:
  AppState(bool q, Scene* s, int cs, ColorPalette cp, string fontpath);

  void handleInput(SDL_Event*);
  void render(SDL_Renderer*, bool debug);
  void handleKeyInput(SDL_Event*);
  void update();
  void appLoop(SDL_Renderer*, SDL_Window*);
  void handleUIButtonInput(string button_title);
  bool mouseInsideScrollview(Scene* currScene, int eventValue);
};


//void handle_input(SDL_Event*, AppState*);
//void render(SDL_Renderer*, AppState*, bool debug);
//void handle_key_input(SDL_Event*, AppState*);
//void update(AppState* as);
//void app_loop(SDL_Renderer*, SDL_Window*);
//void handle_ui_button_input(char* button_title, AppState* as);
//bool is_inside_scrollview(scene_t* curr_scene, int event_value);

#endif
