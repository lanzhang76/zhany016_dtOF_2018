#include "shape.h"

void Square::setup(float posX, float posY, float width, float height){
    x = posX;
    y = posY;
    w = width;
    h = height;
    //    y = height;
    dirx = 5;
    diry = 5;
    
}

void Square::update(){
    
    x += dirx;
    y += diry;
    
    if(x > ofGetWidth()){
        x = ofGetWidth();
        dirx = dirx * -1;
    } else if ( x < 0){
        x = 0;
        dirx = dirx * -1;
        
    }
    
    if(y > ofGetHeight()){
        y = ofGetHeight();
        diry = diry * -1;
    } else if ( y < 0){
        y = 0;
        diry = diry * -1;
        
    }
}

void Square::draw(){
    ofDrawCircle(x, y, w, h);//use y instead of h
    
}
