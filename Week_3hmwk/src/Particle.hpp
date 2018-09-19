#pragma once

#include "ofMain.h"

class particle {
    
public:
    void setup(float posX, float posY);
    void update();
    void draw();
    
    float x,y, dirX, dirY;
    glm::vec2 pos;//    float posx, posy;
    glm::vec2 vel;//velocity float dirx, diry;
    glm::vec2 acc;//accelerator a
    
};
