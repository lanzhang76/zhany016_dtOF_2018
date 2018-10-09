#pragma once

#include "ofMain.h"
#include "mover.hpp"

class attractor{
    public:
    
    attractor();
    attractor(glm::vec2 _pos, float _mass);
    
    glm::vec2 GetAttractForce(mover B);
    
    void addMass();
    void decreaseMass();
    void draw(glm::vec2 _pos);
    
    
    glm::vec2 pos;
    float mass;
    
    const float G = 3;
    
};
