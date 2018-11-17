#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetFrameRate(60); // should be called ofLimitFrameRate() ...
    
    const int RECEIVE_PORT   = 7000;
    receiver.setup(RECEIVE_PORT);
    
    buff = "listening for osc messages on port " + ofToString(RECEIVE_PORT);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    ofxOscMessage m;
    receiver.getNextMessage(m);
    
    while(receiver.hasWaitingMessages()){
        wait = "listening";
        if (m.getAddress() == "/muse/elements/beta_absolute"){
            // message address: /topic/name
            cout << "getting signal" <<endl;
            beta = m.getArgAsFloat(0);
        
          }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    ofDrawBitmapStringHighlight(buff, 20, 20);
    ofDrawBitmapStringHighlight(wait, 30, 20);
    ofDrawBitmapStringHighlight("beta " + ofToString(beta), 20, 40);
    
    betaRGB = ofMap(beta, 0, 1000, 0, 255);
    ofSetColor(betaRGB + 100, 0, 150, 188);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()-beta+100, beta, beta);
    

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
