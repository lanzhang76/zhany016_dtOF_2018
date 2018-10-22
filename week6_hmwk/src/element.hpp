//
//  element.hpp
//  week6_hmwk
//
//  Created by Lan Z on 10/6/18.
//

#pragma once

#include "ofMain.h"


class element{
public:
    
    element();
    element(glm::vec2 _pos, glm::vec2 _vel, float _mass);
    
    void addForce(glm::vec2 force);
    void update();
    void draw();
    
    glm::vec2 pos, vel, acc;
    float mass;
    
    float bornTime;
};
