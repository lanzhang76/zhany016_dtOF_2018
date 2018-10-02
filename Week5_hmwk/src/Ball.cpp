//
//  Ball.cpp
//  Week5_hmwk
//
//  Created by Lan Z on 9/30/18.
//

#include "Ball.hpp"

//--------------------------------------------------------------
void Ball::setup(pos_x,pos_y,radius){
    pos.x = pos_x;
    pos.y = pos_y;
    r = radius;
    
    
}

//--------------------------------------------------------------
void Ball::update(){
    
}

//--------------------------------------------------------------
void Ball::draw(){
    ofDrawCircle(pos.x,pos.y,r);
    
}
