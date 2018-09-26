#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(240, 10, 230);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(int(ofRandom(255)), int(ofRandom(255)),int(ofRandom(255)));
    ofDrawCircle(mouseX, mouseY, 100, 100);
    
    //left eye of the rabbit

 
    ofSetColor(10, 10, 220);
    ofDrawCircle(mouseX-80, mouseY-20, 25, 25);
    
    //right eye of the rabbit

    ofSetColor(10, 10, 220);
    ofDrawCircle(mouseX+80, mouseY-20, 25, 25);
    
    //nose
    ofSetColor(225, mouseX, mouseY);
    ofDrawCircle(mouseX, mouseY, 10, 10);
    
//    ofSetColor(120, mouseX, mouseY);
//    arc(0, +60, 100, 60, 0, PI, CHORD);
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
