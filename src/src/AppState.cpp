#include "../include/AppState.h"

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
using namespace std;

AppState::AppState(bool q, Scene* s, int cs, ColorPalette cp, string fontpath, int ww, int wh, int fps) {
  programQuit = q;
  scenes = s;
  currScene = cs;
  colors = cp;
  FONTPATH = fontpath;
  WINDOW_WIDTH = ww;
  WINDOW_HEIGHT = wh;
  FPS = fps;
}

void AppState::handleInput(SDL_Event* event) {
  Scene currentScene = scenes[currScene];
  while (SDL_PollEvent(event) != 0) {
    switch (event->type) {
      case SDL_KEYDOWN:
        handle_key_input(event);
        break;
      case SDL_MOUSEBUTTONDOWN:
        for (int i = 0; i < curr_scene.buttonsc; i++) {
          button_process_event(&currentScene.buttons[i], event);
        }
        break;
      case SDL_MOUSEWHEEL:
        int mx, my;
        SDL_GetMouseState(&mx, &my);
        bool mouseInView = mouseInsideScrollview(&currentScene, event->wheel.y);

        if (mouseInView && currentScene.special_viewsc > 0) {
          currentScene.special_views[0].scrollview.scroll_y += event->wheel.y * 20; // can adjust sensitivity with the muliplier
          currentScene.special_views[0].scrollview.leading_y += event->wheel.y * 20;
          currentScene.special_views[0].scrollview.is_active = true;
        }

        break;
      default:
        break;
    }
  }
}

void AppState::render(SDL_Renderer* ren, bool debug) {
  // get current scene to render
  Scene scene = scenes[currScene];

  //
  // RENDER START
  //
  SDL_RenderClear(ren); 


  // draw background
  SDL_SetRenderDrawColor(ren, colors.background.red, colors.background.green, colors.background.blue, 255);
  SDL_RenderClear(ren);

  Color color;
  if (debug) {
    //
    // DEBUG
    //
    color = Color(0, 255, 0);
    drawRectangle(ren, &color, true, DEBUG_X, DEBUG_Y, DEBUG_W, DEBUG_H);
  }

  for (int i = 0; i < scene.special_viewsc; i++) {
    color = Color(scene.special_views[i].scrollview.color.r, scene.special_views[i].scrollview.color.g, scene.special_views[i].scrollview.color.b);
    drawRectangle(ren, &color, true, scene.special_views[i].scrollview.origin_x, scene.special_views[i].scrollview.origin_y, scene.special_views[i].scrollview.width, scene.special_views[i].scrollview.height);
  }


  // draw buttons
  int currScrollviewTag;
  Button currBtn;
  Scrollview currScrollview;
  for (int i = 0; i < scene.buttonsc; i++) {
    currBtn = scene.buttons[i];
    currScrollviewTag = currBtn.scrollview_tag;

    // before rending the button we need to check if it should be display IF its tied to a scrollview

    if (currScrollviewTag != -1) {
      currScrollview = scene.special_views[currScrollviewTag - 1].scrollview;

      currBtn.rect.y -= currScrollview.scroll_y;

      // check if (btn_x, btn_y) and (btn_x, btn_y + btn_h) is in range of scrollview height
      int btnYTop = currBtn.rect.y;

      // check if the button is not in bounds
      if (btnYTop < currScrollview.origin_y || btnYTop >= ((currScrollview.origin_y + currScrollview.height) - currBtn.rect.h)) {
        continue; // if so then don't display it
      }
    }


    currBtn.render(ren, FONT);
  }

  // draw labels
  for (int i = 0; i < scene.labelsc; i++) {
    scene.labels[i].render(ren);
  }


  SDL_RenderPresent(ren); 
  //
  // RENDER END
  //
}
