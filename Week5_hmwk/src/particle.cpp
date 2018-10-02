

#include "particle.hpp"


void particle::setup(){
    
    
}

void particle::update(float num){
    float time = ofGetElapsedTimef();
    float sinOfTime = sin(time*0.5)*PI;
    float cosOfTime = cos(time*0.5)*PI;
    float number = num * ofNoise(time);
    pos.x = ofMap(sinOfTime,-3,3,ofGetMouseX()-50*number,ofGetMouseX()+50);
    pos.y = ofMap(cosOfTime,-3,3,ofGetMouseY()-50*number,ofGetMouseY()+50);
    
}



void particle::draw(float pos_x,float pos_y,float v){
    float color = ofNoise(ofGetElapsedTimef());
    float Blue = v;
    ofSetColor(255, ofRandom(10), Blue);
    
    ofDrawCircle(ofGetMouseX()+pos.x,ofGetMouseY()+pos.y,3,3);
//    ofDrawCircle(pos_x,pos_y,10,10);
    
    
}
