//
//  circles.cpp
//  Week10_midterm
//
//  Created by Lan Z on 10/27/18.
//

#include "circles.hpp"

circles::circles(glm::vec3 _pos,float _c){
    cPos = _pos;
    c = _c;
    radius = c*150;
}

void circles::update(){
    radius += 0.5;
}



void circles::draw(){
//    radius = _radius;
//    c = _c;
//    radius = 300+*150;
    float alpha = ofMap(radius,0,5850,255,0);
    ofColor color = ofColor::fromHsb(210,200,200,alpha);
    ofSetColor(color);
    ofSetCircleResolution(100);
    ofDrawCircle(cPos,radius);
}
