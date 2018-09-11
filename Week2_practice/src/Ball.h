#pragma once

#include "ofMain.h"


class Ball{
public:
    
    void setup(float posX, float posY, float diam);
    void update();
    void draw();
    
    float x, y, r, a, b, c;
    float dirX, dirY, colDiff;
    ofColor color;
    
    
    
    
    
    
};
