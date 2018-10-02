#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    
   
    
    ofVec2f speed;
    speed.set(0.01, 0.01);
    
    ofVec2f radius;
    radius.set(10, 10);
    
    for (int i=0; i<30; i++) {
        Ball[i].setup();
    }
    
    
  
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i=0; i<30; i++) {
        Ball[i].update(i+i*2);
    }
    
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
//    Ball[0].draw(mouseX,mouseY,40);
    for (int i=0; i<30; i++) {
        float ball_x = mouseX + i*1.05;
        float ball_y = mouseY + i*1.05;
        Ball[i].draw(ball_x,ball_y,40);
    }
    
    for (int t=0; t<30; t++) {
        float B2_x = sin(t)*5;
        float B2_y = cos(t)*5;
        B2[t].draw(B2_x,B2_y,8);
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
    for (int t=0; t<30; t++) {
        float B2_x = sin(t)*15;
        float B2_y = cos(t)*15;
        B2[t].draw(B2_x,B2_y,8);
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
