#include "Square.h"

void Square::setup(float posX, float posY, float width, float height){
//    x = posX;
//    y = posY;
    pos = glm::vec2(posX,posY);
    w = width;
    h = height;
//    y = height;
//    dirx = 0;
//    diry = 0;
    vel = glm::vec2(0,0); //    vel.x = 0; vel.y = 0; Same as above
    
    color = ofColor(255);
}

void Square::update(){
    
    pos += vel;
    
    if(pos.x > ofGetWidth()){
        pos.x  = ofGetWidth();
        vel.x = vel.x * -1;
    } else if ( pos.x < 0){
        pos.x  = 0;
        vel.x = vel.x * -1;
        
    }
    
    if(pos.y  > ofGetHeight()){
        pos.y = ofGetHeight();
        vel.y = vel.y * -1;
    } else if ( pos.y < 0){
        pos.y = 0;
        vel.y = vel.y * -1;
        
    }
}

void Square::draw(){
    ofSetColor(color);
    ofDrawCircle(pos.x, pos.y, w/2, h/2);//use y instead of h
}

glm::vec2 Square::getCenter(){
    return glm::vec2(pos.x + w*0.5, pos.y + h *0.5); //float cx = pos.x + w*0.5; float yx = pos.y + h*0.5
}
