#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i <balls.size(); i++){
        float time = ofGetElapsedTimef();
        float sinOfTime = sin(time*0.5)*PI;
        float cosOfTime = cos(time*0.5)*PI;
        balls[i].update(sinOfTime,cosOfTime);
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i <balls.size(); i++){
        balls[i].draw();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    object ball;
//    mouse_pos = glm::vec2(ofGetWidth()*0.5,ofGetHeight()*0.5);
    float r = ofRandom(20,30);
    
   
    ball.setup(glm::vec2(mouseX,mouseY),r);
//    ball.update(sin(5),cos(5));
    ball.draw();
    balls.push_back(ball);
    DrawCircle();
}
    



void DrawCircle(){
    ofSetColor(255);
    ofDrawCircle(ofGetWidth()*0.5,ofGetHeight()*0.5,10);
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
