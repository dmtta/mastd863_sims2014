#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myStar.setup();
    ofBackground(ofColor::black);
    mapMouse = mouseX*10/(ofGetWidth());
}

//--------------------------------------------------------------
void ofApp::update(){

    myStar.update();
    mapMouse = mouseX*10/(ofGetWidth());
    myStar.getMappedMouse(mapMouse);

}

//--------------------------------------------------------------
void ofApp::draw(){
    myStar.draw();
    ofSetColor(255,255,255,50);

ofDrawBitmapString("This sketch is coded in oF 0.8.3 windows release by Daniel Mastretta . MFADT // star math code borrowed from Gabriel Gianordoli", 50, ofGetHeight()-60);

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
