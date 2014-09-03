#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
myRect.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
myRect.update(); // runs the update inside the rectangle.
}

//--------------------------------------------------------------
void ofApp::draw(){
myRect.draw(); // it goes to the rectangle and draws it
ofDrawBitmapString("This sketch calculates how much the rectangle takes from left to right.", 50, 60);
ofDrawBitmapString("Time since the sketch started = " + ofToString(ofGetElapsedTimef()), 50, 80);
ofDrawBitmapString("Position of the rectangle in X = " + ofToString(myRect.pos.x), 50, 100);
ofDrawBitmapString("This boring sketch is coded in oF 0.8.3 win release by Daniel Mastretta . MFADT", 50, ofGetHeight()-60);
//ofDrawBitmapString("Position of the rectangle in X = " + myRect.pos.x, 50, 60);
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
