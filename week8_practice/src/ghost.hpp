#pragma once

#include "ofMain.h"
#include "mover.hpp"


class ghost {
public:
    
    
    glm::vec2 GetAttractForce(mover B);
    
    void setup(glm::vec2 _pos);
    void update();
    void draw();
    
    glm::vec2 pos;
    float mass = 1;
    
    const float G = 0.3;
};
