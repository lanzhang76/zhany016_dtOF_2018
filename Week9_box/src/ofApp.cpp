#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    glm::vec2 center = ofGetWindowSize() * 0.5;
    pos = glm::vec3(0,0,100);
}

//--------------------------------------------------------------
void ofApp::update(){
    pos.z -= 0.5;
}

//--------------------------------------------------------------
void ofApp::draw(){
    camera.begin();

    ofDrawAxis(100);

    for (int i = 0; i < 100; i ++){
        
    }
    
    ofPushStyle();
    ofNoFill();
    ofSetColor(255,0,0,90);
    ofDrawBox(pos,100,100,200);
//    ofFill();
    ofPopStyle();

   camera.end();
    
    
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
