#pragma once

#include "ofMain.h"

#include <stdio.h>

#endif /* Ball_hpp */

class Ball{
    
public:
    void setup(float pos_x,float pos_y,float radius);
    void update(float speed);
    void draw();
    
    glm::vec2 pos;
    float r;
};
