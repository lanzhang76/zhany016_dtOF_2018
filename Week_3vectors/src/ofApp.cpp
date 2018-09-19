#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for (int i = 0; i <60; i ++){
        float w = ofRandom(20,50);
        float h = ofRandom(20,50);
        
        squares[i].setup(0, 0, w, h);
        float area = squares[i].w * squares[i].h;
        float speed = ofMap(area, 20*20, 50*50, 20, 0);

        
        
        cout
        << "square [" << i
        <<"] area = " << area
        << " speed = " << speed << endl;
        
        
        

        
        squares[i].vel.x = speed ;
        squares[i].vel.y = speed ;
            //        squares[i].dirx = i + ofRandom(0,10);
            //        squares[i].dirx = -5;
        
        squares[i].color = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
        
        float hue = ofMap(speed,2,20,100,200);
        squares[i].color = ofColor::fromHsb(hue,255,200);
    }
        
    

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i <60; i ++){
        squares[i].update();
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i <60; i ++){
        squares[i].draw();
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
