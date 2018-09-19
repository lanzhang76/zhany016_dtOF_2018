#pragma once

#include "ofMain.h"

class Square{
   
public:
    void setup(float posX, float posY, float width, float height);
    void update();
    void draw();
    
    float bottom();
    glm::vec2 getCenter();//    float getCenterX(); float getCenterY();
    
    float w, h;

    glm::vec2 pos;//    float x, y;
    glm::vec2 vel;//velocity float dirx, diry;
    
    ofColor color; 
    
};
