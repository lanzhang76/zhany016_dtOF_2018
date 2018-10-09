//
//  element.cpp
//  week6_hmwk
//
//  Created by Lan Z on 10/6/18.
//

#include "element.hpp"

element::element(){
    pos = glm::vec2 (0,0);
    vel = glm::vec2 (0,0);
    acc = glm::vec2 (0,0);
}

element::element(glm::vec2 _pos, glm::vec2 _vel, float _mass){
    pos = _pos;
    vel = _vel;
    mass = _mass;
}

void element::addForce(glm::vec2 force){
    acc += force/mass;
}

void element::update(){
    pos += vel;
    vel += acc;
    acc *=0;
}

void element::draw(){
    ofPushStyle();
    // hue based on mass
    float hue       = ofMap(mass, 1, 6, 100, 200);
    ofColor color   = ofColor::fromHsb(hue, 255, 200);
    
    ofSetColor(color);

    // radius based on mass
    ofDrawCircle(pos, mass);
    ofPopStyle();
}
