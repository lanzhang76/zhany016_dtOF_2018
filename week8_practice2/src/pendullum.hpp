#pragma once

#include "ofMain.h"

class pendullum {
public:
    pendullum();
    pendullum(float _angle);
    
    void setup();
    void update();
    void draw();
    
    float angle;
    glm::vec2 pos, vel, acc;
    
}
