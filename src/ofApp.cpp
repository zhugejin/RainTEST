#include "ofApp.h"
float X;
float Y;
float Yspeed;

//--------------------------------------------------------------
void ofApp::setup(){
    //background:
    ofBackground(0);
    //newDrop:
    int numDrop = 10;
    for (int i = 0; i < numDrop; i++)
    {
        Drop newDrop;
        newDrop.reset();
    }
    
   //X = 100;
   //Y = 100;
   //Yspeed = 1;
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < 10; i++)
    {
        drops[i].update();
    }
    //Y = Y + Yspeed;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255);
    for (int i = 0; i < 10; i++)
    {
        drops[i].draw();
    }
    
    //ofDrawLine(X, Y, X, Y+10);
    
    
    
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
