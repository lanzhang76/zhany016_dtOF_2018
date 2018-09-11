#pragma once

#include "ofMain.h"

class Square{
    
public:
    void setup(float posX, float posY, float width, float height);
    void update();
    void draw();
    
    float bottom();
    
    float x, y, w, h;
    float dirx, diry;
    
};
