#pragma once

#include "ofMain.h"
#include "mover.hpp"




class ghost {
public:
    
    
    glm::vec2 GetAttractForce(mover B);
    
    void setup(glm::vec2 _pos, float _radius,float _lerp);
    
    void draw(float _r, float _b);
    void lerping(glm::vec2 _mouse);

    
    glm::vec2 pos, vel, diff, mouse;
    float mass = 1;
    float speed;
    
    const float G = 0.3;
    
    float radius, lerp;
    float r,g,b;
 
   
};
