#pragma once

#include "ofMain.h"

class object{
    
public:
    void setup(glm::vec2 _pos, float _radius);
    void update(float timeX,float timeY);
    void draw();

    
    glm::vec2 pos, rotation, acc;
    float radius;
};


