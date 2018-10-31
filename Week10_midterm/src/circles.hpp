#pragma once

#include "ofMain.h"

class circles {
public:
    
    circles(glm::vec3 _pos,float _c);
    void update();
    void cycle();
    void draw();
    
    glm::vec3 cPos;
    float c;
    float radius;

};

