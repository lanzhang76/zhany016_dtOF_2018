#include "Ball.h"



void Ball::setup(float posX, float posY, float diam){
    x = posX+(ofRandom(-5,5));
    y = posY+(ofRandom(-5,5));
    r = diam;
    
    dirX = 3;
    dirY = 3;
    
//    a = 100;
//    b = 100;
//    c = 100;
    
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
}


void Ball::update(){
    
    if(x < 0 ){
        x = 0;
        dirX *= -1;
    } else if(x > ofGetWidth()){
        x = ofGetWidth();
        dirX *= -1;
    }
    
    if(y < 0 ){
        y = 0;
        dirY *= -1;
    } else if(y > ofGetHeight()){
        y = ofGetHeight();
        dirY *= -1;
    }
    
    x+=dirX;
    y+=dirY;
}


void Ball::draw(){
    ofSetColor(color);
    ofDrawCircle(x,y,r);
}

