#include "ghost.hpp"


glm::vec2 ghost::GetAttractForce(mover B){
  
    float time = ofGetElapsedTimef();

    glm::vec2 distanceVec = glm::vec2(2* sin(time)*TWO_PI,2* cos(time)*TWO_PI)-glm::vec2(B.pos.x,B.pos.y);
    
    float distanceMag = glm::length(distanceVec);
    
    glm::vec2 force = glm::vec2(0,0);//WHY?
    
    if (distanceMag>0){
        
        float distanceMagClamp = ofClamp(distanceMag,1,3);
        float forceMag = (G * mass * B.mass)/(distanceMagClamp * distanceMagClamp);
        glm::vec2 distanceDir = distanceVec/distanceMag;
        force = forceMag * distanceDir;
        
    }
    
    return force;
}



void ghost::setup(glm::vec2 _pos, float _radius,float _lerp){
    pos = _pos;
    radius = _radius;
    lerp = _lerp;
    
}

void ghost::lerping(glm::vec2 _mouse){
    mouse = _mouse;
    glm::vec2 direction = mouse - pos;
    pos += direction * lerp;
    
}

void ghost::draw(float _r, float _b){
 
//    ofRotateDeg(angle);
    
    r = _r;
    b = _b;
    g = 0;
    ofPushStyle();
    ofSetColor(r,g,b);
    ofDrawCircle(0,0,radius);
//    ofSetColor(0);
//    ofDrawCircle(2,3,2,2);
//    ofDrawCircle(2,-3,2,2);
    ofPopStyle();
    
//    ofPopMatrix();
    
//    ofDrawBitmapString("speed: "+ ofToString(speed), 30,30);

}
