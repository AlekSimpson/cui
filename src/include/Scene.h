#pragma once
#ifndef SCENE_H
#define SCENE_H

class Scene {
  string name;
  Color bgcolor;
  vector<Button> buttons;
  vector<Label> labels;
  // vector<V>
};

#endif



// typedef struct {
//   char* view_name;
//   color_t bg_color;
//   int buttonsc;
//   int labelsc;
//   int special_viewsc;
//   label_t* labels;
//   button_t* buttons;
// } view_t;
// 
// // union of all the types that can be held inside the special views inside of scene
// typedef union {
//   scrollview_t scrollview;
// } special_view_u;
// 
// typedef struct {
//   char* scene_name;
//   color_t bg_color;
//   int buttonsc;
//   int labelsc;
//   int special_viewsc;
//   label_t* labels;
//   button_t* buttons;
//   special_view_u* special_views;
// } scene_t;
// 
// scene_t scene(char*, color_t*, int, int, int, label_t*, button_t*, special_view_u*);
