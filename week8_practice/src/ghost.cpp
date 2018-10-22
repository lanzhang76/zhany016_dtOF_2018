#include "ghost.hpp"


void ghost::setup(glm::vec2 _pos){
    pos = _pos;
    
}

glm::vec2 ghost::GetAttractForce(mover B){
    // F(magnitude) = G * m1 * m2/ (float distance * distance)
    //F = magnitude * direction of the F
    
    //1. distance(magnitude
//    glm::vec2 distanceVec = pos - B.pos;
    float time = ofGetElapsedTimef();
//    pos.x = 30* sin(time);
    glm::vec2 distanceVec = glm::vec2(10* sin(time),10* cos(time))-glm::vec2(B.pos.x,B.pos.y);
    
    float distanceMag = glm::length(distanceVec);
    //normalize it
    
    glm::vec2 force = glm::vec2(0,0);//WHY?
    
    if (distanceMag>0){
        
        float distanceMagClamp = ofClamp(distanceMag,1,3);
        
        float forceMag = (G * mass * B.mass)/(distanceMagClamp * distanceMagClamp);
        glm::vec2 distanceDir = distanceVec/distanceMag;
        
        force = forceMag * distanceDir;
        
    }
    
    return force;
}


void ghost::update(){
    
}

void ghost::draw(){
    
    ofVec3f p1 = ofVec3f(0,0);          // triangle front point
    ofVec3f p2 = p1 - ofVec3f(50,20);   // right point
    ofVec3f p3 = p1 - ofVec3f(50,-20);  // left point
    
    ofDrawTriangle(p1,p2,p3);
    
    ofVec3f p4 = p1 - ofVec3f(30,30);   // right point
    ofVec3f p5 = p1 - ofVec3f(30,-30);
    ofDrawTriangle(p1,p4,p5);
    

    
    ofDrawCircle(0, 0, 10, 10);
    
    ofPushStyle();
    ofSetColor(0);
    ofDrawCircle(2,3,2,2);
    ofDrawCircle(2,-3,2,2);
    ofPopStyle();
}
