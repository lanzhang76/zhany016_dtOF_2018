#include "ofApp.h"
int nMovers        = 40;
int nAttractors    = 4;

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    ofSetBackgroundAuto(false);
    ofSetFrameRate(100.);
    ofEnableSmoothing();
    
    
    
    for (int i = 0; i < nMovers; i ++){
        movers.push_back(mover());
    }
    
//    for (int i = 0; i < nAttractors; i ++){
//        A.push_back(attractor());
//    }
    for (int i = 0; i <nAttractors; i++){
//        glm::vec2 pos = glm::vec2(mouseX+ofRandom(5),mouseY+ofRandom(5));
        
          glm::vec2 pos = glm::vec2(ofGetWidth()*0.5,ofGetHeight()*0.5);
        float mass = 4;
        attractor MouseAttract = attractor(pos,mass);
        
        A.push_back(MouseAttract);
        
    }
    
//    attractor B = attractor(glm::vec2(300,400),30);
    //how to call an individual one here
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int a=0; a<nAttractors; a++)
    {
        for (int m=0; m<nMovers; m++)
        {
            // calculate force
            glm::vec2 force = A[a].GetAttractForce(movers[m]);
            
            // apply force
            movers[m].addForce(force);
        }
    }
    
    for (int m=0; m<nMovers; m++)
    {
        movers[m].update();
    }
    
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int a=0; a<nAttractors; a++)
    {
//        glm::vec2 pos = glm::vec2 (mouseX+ofRandom(5),mouseY+ofRandom(5));
        glm::vec2 pos = glm::vec2(ofGetWidth()*0.5,ofGetHeight()*0.5);
        A[a].draw(pos);
    }
    
    for (int m=0; m<nMovers; m++)
    {
        movers[m].draw();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    for (int a=0; a<nAttractors; a++)
    if (key == OF_KEY_UP){
            A[a].addMass();
    }else if (key == OF_KEY_DOWN){
            A[a].decreaseMass();
    }

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
//    for (int a=0; a<nAttractors; a++)
//    {
//        A[a].updateMass();
//    }
    
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
