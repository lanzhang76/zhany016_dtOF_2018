
#include "object.hpp"

//---------------------------------------------------------

void object::setup(glm::vec2 _pos, float _radius){
//    pos = _pos;
//    radius = _radius;
}


void object::update(float timeX,float timeY){
        float time = ofGetElapsedTimef();
        float sinOfTime = sin(time*0.5)*PI;
        float cosOfTime = cos(time*0.5)*PI;
        rotation.x = ofMap(timeX,-3,3,-5,5);
        rotation.y = ofMap(timeY,-3,3,-5,5);
        pos += rotation;
}

void object::draw(){
    ofSetColor(255);
    ofDrawCircle(pos,radius);
   
}
