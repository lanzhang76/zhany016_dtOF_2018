#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    gravity = glm::vec2(0,0.5);
    
    
    for (int i = 0; i < elements.size();i ++){
        elements[i].addForce(gravity);
        elements[i].update();
    }
   
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    int num = 20;
    int maxElements = 5000;
    for (int i = 0; i < num;i ++){
        glm::vec2 mousePos = glm::vec2(ofGetMouseX(),ofGetMouseY());
        glm::vec2 vel = glm::vec2(0,ofRandom(-4,-1));
//        glm::vec2 vel = glm::vec2(0,0.1);
        //    float mass = ofRandom(1,6);
        element Element = element(mousePos, vel, ofRandom(1,6));
        elements.push_back(Element);
        
    }
    
    
    
    
    for (int i = 0; i < elements.size();i ++){
        elements[i].draw();
    }
    
    
    
    ofDrawBitmapString("elements.size() = " + ofToString(elements.size()), 20, 20);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    int num = 20;
    for (int i = 0; i < num;i ++){
        glm::vec2 mousePos = glm::vec2(ofGetMouseX(),ofGetMouseY());
        glm::vec2 vel = glm::vec2(0,2);
        //    float mass = ofRandom(1,6);
        element Element = element(mousePos, vel, ofRandom(1,6));
        //        Element.addForce(glm::vec2
        elements.push_back(Element);
        
        //
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
