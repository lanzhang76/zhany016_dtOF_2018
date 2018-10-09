//
//  attractor.cpp
//  week6_hmwk2
//
//  Created by Lan Z on 10/8/18.
//

#include "attractor.hpp"


attractor::attractor(){
    pos = glm::vec2 (ofGetWidth()*0.5, ofGetHeight()*0.5);
    mass = ofRandom(1,6);
}

attractor::attractor(glm::vec2 _pos, float _mass){
    pos = _pos;
    mass = ofClamp(_mass,5,30);
}

glm::vec2 attractor::GetAttractForce(mover B){
    // F(magnitude) = G * m1 * m2/ (float distance * distance)
    //F = magnitude * direction of the F
    
    //1. distance(magnitude
    glm::vec2 distanceVec = pos - B.pos;
    float distanceMag = glm::length(distanceVec);
    //normalize it
    
    glm::vec2 force = glm::vec2(0,0);//WHY?
    
    if (distanceMag>0){
        
        float distanceMagClamp = ofClamp(distanceMag,5,30);
        
        float forceMag = (G * mass * B.mass)/(distanceMagClamp * distanceMagClamp);
        glm::vec2 distanceDir = distanceVec/distanceMag;
        
     force = forceMag * distanceDir;
        
    }
    
    return force;
}

void attractor::addMass(){
    mass += 1;
    mass = ofClamp(mass,5,30);
}

void attractor::decreaseMass(){
    mass -= 1;
    mass = ofClamp(mass,3,800);
}

void attractor::draw(glm::vec2 _pos){
    ofPushStyle();
    float hue = ofMap(mass,1,30,140,250);
    ofColor color = ofColor::fromHsb(hue,240,240);
    ofSetColor(color);
    pos = _pos;
    ofDrawCircle(pos,mass*4);
    
    
    ofPopStyle();
    
    
    
}
