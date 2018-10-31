#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofEnableNormalizedTexCoords();
    house.load("house.png");
    
 
    //pos = glm::vec3(-600,0,-500);
    pos = glm::vec3(0.);
    
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

}

//--------------------------------------------------------------
void ofApp::update(){
    
//    if (ofGetFrameNum() == 2){
//        glm::vec3 camPos = cam.getPosition();
//        camPos.y += 200;
//        cam.setPosition(camPos);
//    }
    
    pos.z -=70;

    for (int i=0; i<houses.size(); i++){
        houses[i].z -= 4;
        if (houses[i].z < -4000){
            houses[i].z = 0;
        }
    }

    for(int t = 0; t <Circles.size(); t++){
        Circles[t].update();
        if (Circles[t].radius > 5850){
            Circles[t].radius = 0;
        }
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofHideCursor();
    ofEnableDepthTest();
    
    cam.begin();
    
//    ofDrawAxis(500);
//    ofDrawGrid(100);
    
    ofPushMatrix();
    //ofTranslate(-10 * 200 - 50, -500, 0);
//    for (int i = 0; i < 20; i ++){
//        for (int t = 0; t < 20; t ++){
//
//    for (int col = 0; col<20; col++){
//        for (int row = 0; row <20; row ++){
//            int index = col * 20 + row;
//
//        }
//    }
//
    ofPushStyle();
    for(int c = 0; c < 40; c++){
//        ofDrawCircle(circles[c],radius);
//        float radius = 300+c*150;
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
    for (int i=0; i<houses.size(); i++){
            house.bind();
            ofFill();
            ofSetColor(255,80);
            //ofDrawBox(pos.x+i*200,pos.y,pos.z+t*200,100,100,100);
            ofDrawBox(houses[i], 100, 100, 100);
            house.unbind();
            
            ofNoFill();
            ofSetColor(255,90);
            //ofDrawBox(pos.x+i*200,pos.y,pos.z+t*200,100,100,100);
            ofDrawBox(houses[i], 100, 100, 100);
    }
//        }
//    }
    
    ofPopMatrix();
    
//    glm::vec3 mousePos = glm::vec3( ofGetMouseX(), ofGetMouseY(), 0);
//    glm::vec3 worldPos = cam.screenToWorld(mousePos);
//    worldPos.z = 0;
//    cout << worldPos << endl;
//
//    ofDrawBox(worldPos, 100);
    
    ofDisableDepthTest();
    cam.end();
    
    
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
