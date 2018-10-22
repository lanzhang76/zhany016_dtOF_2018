#include "ofApp.h"
int nMovers = 10;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    glm::vec2 pos = glm::vec2(0,0);
    Ghost.setup(pos);
    
    for (int i = 0; i < nMovers; i ++){
        movers.push_back(mover());
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    glm::vec2 target = glm::vec2(mouseX,mouseY);
    glm::vec2 direction = target - pos;
    
    pos += (direction) * 0.1;
    
    float angleRadius = atan2(direction.y,direction.x);
    angle = ofRadToDeg(angleRadius);
    
    
  
        for (int m=0; m<nMovers; m++)
        {
            // calculate force
            glm::vec2 force = Ghost.GetAttractForce(movers[m]);
            
            // apply force
            movers[m].addForce(force);
        }
    
    
    for (int m=0; m<nMovers; m++)
    {
        movers[m].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofPushMatrix();
  
    
    ofTranslate(pos);
    
    ofRotateDeg(angle);    // rotate our space
    
    Ghost.draw();
    for (int m=0; m<nMovers; m++)
    {
        movers[m].draw();
    }
    
    
    ofPoint point;
    point.x = 100;
    point.y = 100;
    ofTranslate(point);     // move the coordinate system to position of point and make that zero.
    
    
    ofPopMatrix();
    
    
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
