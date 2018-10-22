//
//  mover.cpp
//  week6_hmwk2
//
//  Created by Lan Z on 10/8/18.
//

#include "mover.hpp"

mover::mover(){
    pos = glm::vec2(ofRandom(ofGetWidth())*0.5,ofRandom(ofGetHeight()*0.5));
    mass = ofRandom(0,3);
  

    vel = glm::vec2(ofRandom(1,1.4),ofRandom(1,1.8));
    acc = glm::vec2(0,0);
}

mover::mover(glm::vec2 _pos, float _mass){
    pos = _pos;
    mass = _mass;
    
    vel = glm::vec2(ofRandom(2,7),ofRandom(0,5));
    acc = glm::vec2(0,0);
}

void mover::addForce(glm::vec2 force){
    //force = M * A
    acc += force/mass;
}

void mover::update(){
    pos += vel;
    vel += acc;
    acc *= 0;
}

void mover::bouncyWindow(){
    if(pos.x < 0){
        pos.x = 0;
        vel.x *= -1;
    }
    
    if(pos.x > ofGetWidth()){
        pos.x = ofGetWidth();
        vel.x *= -1;
    }
    
    if(pos.y < 0){
        pos.y = 0;
        vel.y *= -1;
    }
    
    if(pos.y > ofGetHeight()){
        pos.y = ofGetHeight();
        vel.y *= -1;
    }
}

void mover::draw(){
    ofPushStyle();
    
    float hue = ofMap(pos.x,0,ofGetWidth(),130,230);
    ofColor color = ofColor::fromHsb(hue,240,240);
    ofSetColor(color);
  
    
    ofDrawCircle(pos,mass);
    ofPopStyle();
    
}
