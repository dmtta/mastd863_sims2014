#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
ofBackground(ofColor::black);
changeSpeed = 0.001f;
circleAlpha = 100;
}

//--------------------------------------------------------------
void ofApp::update(){

for (int i = 0; i <= 200; i++){
    myCircle[i].parseToCircle(mouseX,mouseY,changeSpeed+(changeSpeed*i),circleAlpha-i);
    myCircle[i].update();
}

}

//--------------------------------------------------------------
void ofApp::draw(){
for (int i = 0; i <= 200; i++){
    myCircle[i].draw();
}
ofSetColor(ofColor::white);
ofDrawBitmapString("Open Frameworks Easing Example.", 50, 60);
ofDrawBitmapString("This sketch is coded in oF 0.8.3 windows release by Daniel Mastretta . Parsons MFADT", 50, ofGetHeight()-60);

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
