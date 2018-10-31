#include "ofApp.h"
int nMovers = 200;
int nBalls = 15;


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofSetCircleResolution(100);
    ofEnableNormalizedTexCoords();
    house.load("house.png");
    audio.load("ritual.mp3");
    audio.play();
    ofSetLineWidth(2);
    
    
    
    
    //houses
    for (int col=0; col<20; col++){
        for (int row=0; row<20; row++){
            glm::vec3 hPos;
            hPos.x = ofMap(col, 0, 20, -2000, 2000);
            hPos.y = -500;
            hPos.z = ofMap(row, 0, 20, -3600, 400);
            cout << hPos << endl;
            houses.push_back(hPos);
        }
    }
    
    //circles:
    for(int c = 0; c <40; c++){
        glm::vec3 cPos = glm::vec3(0,-650,-4300);
        Circles.push_back(circles(cPos,c));
    }
    
    //Mouse:
    for (int i=0; i<nBalls; i++){
        float x = ofMap(mouseX, 0,1440, -720,720);
        float y = ofMap(mouseY,0,900,450,-450);
        glm::vec2 pos = glm::vec2 (x,y);
        float radius = ofMap(i, 0, nBalls-1, 10, 50);
        ghost[i].setup(pos,radius);
    }
    
    for (int i = 0; i < nMovers; i ++){
        movers.push_back(mover());
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //houses:
    for (int i=0; i<houses.size(); i++){
        houses[i].z -= 4;
        if (houses[i].z < -4000){
            houses[i].z = 0;
        }
    }
    //Backdrop Circles
    for(int t = 0; t <Circles.size(); t++){
        Circles[t].update();
        if (Circles[t].radius > 5850){
            Circles[t].radius = 0;
        }
    }
    
    //mouse:
    glm::vec2 mouse;
    mouse.x = ofMap(mouseX, 0,1440, -720,720);
    mouse.y = ofMap(mouseY,0,900,450,-450);
//    mouse.x = ofGetMouseX();
//    mouse.y = -ofGetMouseY();
    
    for (int i=0; i<nBalls; i++){
        ghost[i].update(mouse);
    }
    
    for (int m=0; m<nMovers; m++){
        glm::vec2 force = ghost[0].GetAttractForce(movers[m]);
        movers[m].addForce(force);
        movers[m].update();
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    
    ofEnableDepthTest();
    
    cam.begin();
    ofHideCursor();
    
//        ofDrawAxis(500);
    //    ofDrawGrid(100);
    
    ofPushMatrix();
    
    ofPushStyle();
        for(int c = 0; c < 40; c++){
            Circles[c].draw();
        }
    ofPopStyle();
    
    //backdrop
    ofPushStyle();
        ofSetColor(0);
        ofFill();
        ofDrawBox(0,-700,-4400,4000,10,10000);
    ofPopStyle();
    
    //houses
    ofPushStyle();
    for (int i=0; i<houses.size(); i++){
        house.bind();
        ofFill();
        ofSetColor(255,80);
        ofDrawBox(houses[i], 100, 100, 100);
        house.unbind();
        
        ofNoFill();
        ofSetColor(255,90);
        ofDrawBox(houses[i], 100, 100, 100);
    }
    ofPopStyle();
    ofPopMatrix();
      ofDisableDepthTest();
   
    //ghost + movers
    ofPushMatrix();
    ofPoint point;
//    point.x = ofGetMouseX()-512;
//    point.y = -ofGetMouseY()+384;
//    point.x = ofGetMouseX();
//    point.y = -ofGetMouseY();
    point.x = ofMap(mouseX, 0,1440, -720,720);
    point.y = ofMap(mouseY,0,900,450,-450);
    
//    point.x = ofMap(mouseX, 0,ofGetWidth(),-512,512);
//    point.y = ofMap(mouseY,0,ofGetHeight(),-384,384);
    point.z = 0;
    ofTranslate(point);
    ofRotate(ghost[0].angle);

    for (int i=0; i<nBalls; i++){
        ghost[i].draw();
    }
    
    for (int m=0; m<nMovers; m++)
    {
        movers[m].draw();
    }
    ofPopMatrix();
    
     
    
  
    cam.end();
    
    ofDrawBitmapString("Mouse Position:"+ ofToString(point.x)+", "+ofToString(point.y),20,20);
    
       ofDrawBitmapString("Ghost Position:"+ ofToString(ghost[0].pos.x)+", "+ofToString(ghost[0].pos.y),20,40);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
//    if (key == ' '){
//        int num = 20;
//        for (int i = 0; i < num;i ++){
//            glm::vec2 mousePos = glm::vec2(ofGetMouseX(),ofGetMouseY());
//            glm::vec2 vel = glm::vec2(0,2);
//            element Element = element(mousePos, vel, ofRandom(1,6));
//            elements.push_back(Element);
//            elements[i].draw();
//            glm::vec2 gravity = glm::vec2(0,0.5);
//            elements[i].addForce(gravity);
//            elements[i].update();
//        }
//        
//    }
    
    
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
