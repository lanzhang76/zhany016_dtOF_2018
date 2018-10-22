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
    
    bornTime = ofGetElapsedTimef();
}

element::element(glm::vec2 _pos, glm::vec2 _vel, float _mass){
    pos = _pos;
    vel = _vel;
    mass = _mass;
    
    bornTime = ofGetElapsedTimef();
    cout << bornTime << endl;
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
    float hue = ofMap(mass, 1, 6, 100, 200);
    float sat = 255;
    float brightness = 255;
    
    float aliveTime = ofGetElapsedTimef()-bornTime;
    float alpha = ofMap(aliveTime,0,0.5,255,0,true);
    
    ofColor color   = ofColor::fromHsb(hue, sat, brightness, alpha);
    
    ofSetColor(color);

    // radius based on mass
    ofDrawCircle(pos, mass);
    ofPopStyle();
}
