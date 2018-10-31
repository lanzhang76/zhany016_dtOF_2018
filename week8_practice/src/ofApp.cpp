#include "ofApp.h"
int nMovers = 10;
int nGhost = 15;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
   
    for (int i = 0; i < nGhost; i++){
        ofSetCircleResolution(100);
        pos = glm::vec2(mouseX,mouseY);
        radius = ofMap(i, 0, 15, 10, 30);
        lerp = ofMap(radius, 30, 10, 0.1,0.03);
        Ghost[i].setup(pos,radius,lerp);
    }
    
    for (int i = 0; i < nMovers; i ++){
        glm::vec2 Mpos = glm::vec2(mouseX,mouseY);
        movers.push_back(mover(Mpos));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    glm::vec2 mouse;
    mouse.x = ofGetMouseX();
    mouse.y = ofGetMouseY();
//    direction = target - pos;


    for (int i = 0; i < nGhost; i ++){
        Ghost[i].lerping(mouse);
        glm::vec2 direction = mouse - Ghost[0].pos;
//        Ghost[i].pos += direction * Ghost[i].lerp;

    }
    
    
    float angleRadius = atan2(direction.y,direction.x);
    angle = ofRadToDeg(angleRadius);
    
    //force added between ghost and movers
    for (int m=0; m<nMovers; m++){
            // calculate force
            glm::vec2 force = Ghost[0].GetAttractForce(movers[m]);
            movers[m].addForce(force);
            movers[m].update();
        }
    
    
//    for (int m=0; m<nMovers; m++){
//            movers[m].update();
//        }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

   // rotate our space
    ofPushMatrix();
    ofRotateDeg(angle);
//    glm::vec2 pos = glm::vec2(mouseX,mouseY);
    ofTranslate(Ghost[14].pos);
    
    //ghost:
    for (int i = 0; i < nGhost; i++){
        float r = ofMap(Ghost[i].radius, 10,30, 100,255);
        float b = ofMap(Ghost[i].radius, 10,30, 0,255);
       Ghost[i].draw(r,b);
    }
    //movers:
    for (int m=0; m<nMovers; m++)
    {
        movers[m].draw();
    }
    
//    ofPoint point;
//    point.x = 100;
//    point.y = 100;
//    ofTranslate(point);     // move the coordinate system to position of point and make that zero.
    
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
