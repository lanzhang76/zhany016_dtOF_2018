
#include "mover.hpp"

mover::mover(){
    pos = glm::vec2(0,0);
    mass = ofRandom(2,4);
    vel = glm::vec2(ofRandom(0.2,1),ofRandom(0.2,1));
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

void mover::draw(){
    ofPushStyle();
    
    float hue = ofMap(mass,2,4,180,250);
    ofColor color = ofColor::fromHsb(hue,240,240);
    ofSetColor(color);
    
    ofDrawCircle(pos,mass);
    ofPopStyle();
    
}
