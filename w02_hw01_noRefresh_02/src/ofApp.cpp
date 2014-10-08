#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
ofSetBackgroundAuto(false);
ofBackground(ofColor::black);


center.x = ofGetHeight()*0.5;
center.y = center.x;
generalAngle = 10;

// for (int i = 0; i < 200; i++) {
//
//        circle newBall;
//        newBall.setInit(ofPoint(ofGetWidth()*ofRandomf(),ofGetHeight()*ofRandomf()));
//        balls.push_back(newBall);
//    }
}

//--------------------------------------------------------------
void ofApp::update(){

//   for (int i = 0; i < balls.size(); i++) {
//
//       balls[i].update();
//    }

}

//--------------------------------------------------------------
void ofApp::draw(){
ofSetColor(0,5);
ofRect(0,0,ofGetWidth(),ofGetHeight());
    //  Draw them all

  //  for (int i = 0; i < balls.size(); i++) {
    //     balls[i].draw();
   //}

    float xorig = ofGetWidth()/2;
	float yorig = ofGetHeight()/2;

	for (int i = 0; i < 50; i++){

		float radius = 50 + i * 5;
		float angle = ofGetElapsedTimef() * (1 + i / 10.0);
		float x = xorig  + radius * 4*atan(angle);
		float y = yorig*(i*.01) + radius * -tan(angle);

		ofSetColor(255,255,255);
		ofCircle(x,y,1);

	}

		for (int i = 0; i < 50; i++){

		float radius = 50 + i * 5;
		float angle = ofGetElapsedTimef() * (1 + i / 10.0);
		float x = xorig  + radius * 4*-atan(angle);
		float y = yorig*(i*.01) + radius * tan(angle);

		ofSetColor(255,255,255);
		ofCircle(x,y,1);

	}

	for (int i = 0; i < 30; i++){

		float radius = 50 + i * 5;
		float angle = ofGetElapsedTimef() * (1 + i / 10.0);
		float x = xorig  + radius * 4*cos(angle);
		float y = yorig  + radius * -tan(angle);

		ofSetColor(255,255,255);
		ofCircle(x,y,3);

	}

//  for (auto &it: balls) { // Cooler way ;P
//     it.draw();
//  }

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
