#include "ofApp.h"
int nMovers = 20;
int nBalls = 15;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetCircleResolution(100);
    
    
    for (int i=0; i<nBalls; i++){
        float radius = ofMap(i, 0, nBalls-1, 10, 30);
        ghost[i].setup(radius);
    }
    
    for (int i = 0; i < nMovers; i ++){
        movers.push_back(mover());
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    glm::vec2 mouse;
    mouse.x = ofGetMouseX();
    mouse.y = ofGetMouseY();
   
    
    for (int i=0; i<nBalls; i++){
        ghost[i].update(mouse);
        glm::vec2 direction = mouse - ghost[i].pos;
        float angleRadius = atan2(direction.y,direction.x);
        angle = ofRadToDeg(angleRadius);
    }
    
    for (int m=0; m<nMovers; m++){
        // calculate force
        glm::vec2 force = ghost[0].GetAttractForce(movers[m]);
        movers[m].addForce(force);
        movers[m].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofPushMatrix();
//    ofTranslate(ghost[0].pos);
//    ofRotateDeg(angle);
   
    for (int i=0; i<nBalls; i++){
        ghost[i].draw();
    }
    
    for (int m=0; m<nMovers; m++)
    {
        movers[m].draw();
    }
                
//    ofPopMatrix();

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
