#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetVerticalSync(true);
	ofBackground(0,0,0);

    isBlue = true;
    isRed = false;

	// set the position of the rectangle:

	myRectangle.pos1.x = 250;
	myRectangle.pos1.y = 250;
	myRectangle.pos2.x = 500;
	myRectangle.pos2.y = 500;
}

//--------------------------------------------------------------
void ofApp::update(){
myRectangle.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
myRectangle.draw();

if (isBlue){
    ofSetColor(ofColor::blue);
    ofDrawBitmapString("Click to change the blue circle, the rectangle will adjust accordingly.", 50, 60);
} else {
 ofSetColor(ofColor::red);
    ofDrawBitmapString("Click to change the red circle, the rectangle will adjust accordingly.", 50, 60);
}
ofSetColor(ofColor::white);
ofDrawBitmapString("This boring sketch is coded in oF 0.8.3 win release by Daniel Mastretta. MFADT", 50, ofGetHeight()-60);

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
if (isBlue) {
myRectangle.pos1.x = mouseX;
myRectangle.pos1.y = mouseY;
isBlue = !isBlue;
} else {

myRectangle.pos2.x = mouseX;
myRectangle.pos2.y = mouseY;
isBlue = true;

}
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
