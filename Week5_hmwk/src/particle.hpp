#pragma once

#include "ofMain.h"

class particle{
    
public:
    void setup();
    void update(float num);
    void draw(float pos_x,float pos_y,float v);
    void ChangePos(float change);
    
      glm::vec2 pos,radius,speed;
};
