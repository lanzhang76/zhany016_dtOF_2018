#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);
    ofSetBackgroundAuto(false);
    
//    c = ;
//    d = ;
    
//    c = ofMap( ofNoise( ofGetElapsedTimef()/2.0, -1000), 0, 1, 0, ofGetWidth());
//    d = ofMap( ofNoise( ofGetElapsedTimef()/2.0, 1000), 0, 1, 0, ofGetHeight());
    for (int i=0; i<60 ; i ++){
        particles[i].setup(ofGetMouseX()+ofRandom(ofGetWidth()),ofGetMouseY()+ofRandom(ofGetHeight()));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<60 ; i ++){
        particles[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    for (int i=0; i<60 ; i ++){
        particles[i].draw();
    }
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
