#pragma once

#include "ofMain.h"
#include "circles.hpp"
#include "Ghost.hpp"
#include "mover.hpp"
#include "element.hpp"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofImage house;
    ofSoundPlayer audio;
//    glm::vec3 pos;
    ofEasyCam cam;
    
    vector<glm::vec3> houses;
    vector<circles> Circles;
    
    Ghost ghost[15];
    vector<mover> movers;
    
    vector<element> elements;
    
    float angle;
    glm::vec2 BallPos;
    
};
