#pragma once
#include "ofMain.h"


class mover{
public:
    mover();
    mover(glm::vec2 _pos, float _mass);
    
    void addForce(glm::vec2 force);
    void bouncyWindow();
    
    void update();
    void draw();
    
    glm::vec2 pos, vel, acc;
    float mass;
};
