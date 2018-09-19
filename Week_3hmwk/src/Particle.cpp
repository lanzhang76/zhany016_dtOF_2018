#include "Particle.hpp"


//--------------------------------------------------------------
void particle::setup(float posX, float posY){
    pos = glm::vec2(posX,posY);
    vel = glm::vec2(0.1,0.2);
    acc = glm::vec2(ofNoise(ofGetElapsedTimef()/vel));
    

//    x = ofMap( ofNoise( ofGetElapsedTimef()/2.0, -1000,500), 0, 1, 0, ofGetWidth());
//    y = ofMap( ofNoise( ofGetElapsedTimef()/2.0, 1000,400), 0, 1, 0, ofGetHeight());
}

//--------------------------------------------------------------
void particle::update(){
    pos += vel;
    vel += acc*0.02;
    
    if(pos.x > ofGetWidth()){
        pos.x  = ofGetWidth();
        vel.x = vel.x * -1;
        acc.x = acc.x * -1;
    } else if ( pos.x < 0){
        pos.x  = 0;
        vel.x = vel.x * -1;
        acc.x = acc.x * -1;
        
    }
    
    if(pos.y  > ofGetHeight()){
        pos.y = ofGetHeight();
        vel.y = vel.y * -1;
        acc.y = acc.y * -1;
    } else if ( pos.y < 0){
        pos.y = 0;
        vel.y = vel.y * -1;
        acc.y = acc.y * -1;
    }
    
    
    
}

//--------------------------------------------------------------
void particle::draw(){
    
    ofSetColor(ofMap(ofGetMouseX(),0,ofGetWidth(),0,255),0,ofRandom(255),90);
    ofDrawCircle(pos,30);
    ofSetColor(ofMap(ofGetMouseX(),0,ofGetWidth(),0,255),0,ofRandom(255),98);
    ofDrawCircle(pos.x-3,pos.y-3,25);
    
}
