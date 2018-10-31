
#include "Ghost.hpp"



void Ghost::setup(float _radius){
    
    //    radius = ofMap(i, 0, nBalls-1, 10, 30);
    radius = _radius;
    pos = glm::vec2(0,0);
    lerp   = ofMap(radius, 50, 10, 0.1, .03);
    // the larger the ball, the faster the interpolation speed
    
    // set color
    color.r = ofMap(radius, 10,30, 0,255);    // smaller --> redder
    color.b = ofMap(radius, 10,50, 0,255);    // larger --> bluer
    color.g = 0;
    
}

void Ghost::update(glm::vec2 _mouse){
    
    glm::vec2 direction = _mouse - pos;     // get direction vector
    
    pos += direction * lerp;
//    pos += (direction) * .03;              // interpolate 3% to target
    
    float angleRadians = atan2(direction.y, direction.x);
    float angleRadius = atan2(direction.y,direction.x);
    angle = ofRadToDeg(angleRadius);
    
    
}

void Ghost::draw(){
    ofPushMatrix();
    ofTranslate(pos);
    ofRotateDeg(angle);
    
    ofSetColor(color);
    ofDrawCircle(pos,radius);
    ofSetColor(0);
    ofDrawCircle(pos.x-8,pos.y+5,4);
    ofDrawCircle(pos.x+8,pos.y+5,4);
    
    ofPopStyle();
    
    ofPopMatrix();
}

glm::vec2 Ghost::GetAttractForce(mover B){
    
    float time = ofGetElapsedTimef();
    
    glm::vec2 distanceVec = glm::vec2(10* sin(time)*TWO_PI,pos.y+10* cos(time)*TWO_PI)-glm::vec2(B.pos.x,B.pos.y);
//    glm::vec2 distanceVec = pos-glm::vec2(B.pos.x,B.pos.y);
    float distanceMag = glm::length(distanceVec);
    
    glm::vec2 force = glm::vec2(0,0);
    
    if (distanceMag>0){
        
        float distanceMagClamp = ofClamp(distanceMag,1,2);
        float forceMag = (G * mass * B.mass)/(distanceMagClamp * distanceMagClamp);
        glm::vec2 distanceDir = distanceVec/distanceMag;
        force = forceMag * distanceDir * 0.2;
        
    }
    
    return force;
}

