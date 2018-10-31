#pragma once
#include "ofMain.h"
#include "mover.hpp"

class Ghost {
public:
    
    glm::vec2 GetAttractForce(mover B);
    
    void setup(float _radius);
    void update(glm::vec2 _mouse);
    void draw();
    
    const float G = 0.1;
    float mass = 1;
    
    glm::vec2 pos;
    float radius;
    ofColor color;
    float lerp;
    float angle;// amount to interpolate when moving
    // (percentage of distance to target)
};
