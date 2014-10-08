#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetVerticalSync(true);
	ofBackground(30,30,30);
	ofSetCircleResolution(100);
	radius = 0.01;
	zAxis = 0;
    rGrowth = 0.01;

}

//--------------------------------------------------------------
void ofApp::update(){

	radius = radius + rGrowth;

if (radius >= 100) {
    rGrowth = rGrowth *-1;
}

if (radius <= 0) {
    rGrowth = rGrowth *-1;
}

	zAxis = zAxis + 0.03;

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
	ofSetColor(255);

    cam.begin();
    light.enable();
    ofEnableLighting();
    glEnable(GL_DEPTH_TEST);

    float xorig = 0;
	float yorig = 0;
	float zorig = 0;

	float angle = ofGetElapsedTimef()*20;  // This sets up the speed of the arc

	float x = xorig + radius * cos(angle);

	float y = yorig + radius * -sin(angle);

	float z = zorig + zAxis;


	ofPoint temp;
	temp.x = x;
	temp.y = y;
	temp.z = z;

	points.push_back(temp);
	if (points.size() > 100000){
		points.erase(points.begin());
	}

	ofSetRectMode(OF_RECTMODE_CENTER);
	ofSetColor(255,0,0);
	ofNoFill();

	// ------------------------------------  CONE 1   X  Y  Z-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(points[i].x, points[i].y,points[i].z);
	}
	ofEndShape();

	// ------------------------------------  CONE 2  -X -Y -Z-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(-points[i].x, -points[i].y,-points[i].z);
	}
	ofEndShape();

    // ------------------------------------  CONE 3   X  Z  Y-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(points[i].x, points[i].z,points[i].y);
	}
	ofEndShape();

    // ------------------------------------  CONE 4 -X -Z -Y-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(-points[i].x, -points[i].z,-points[i].y);
	}
	ofEndShape();

    // ------------------------------------  CONE 5  Z  X  Y-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(points[i].z, points[i].x,points[i].y);
	}
	ofEndShape();

	// ------------------------------------  CONE 6 -Z -X -Y-----------------------------------------------------


	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(-points[i].z,-points[i].x,-points[i].y);
	}
	ofEndShape();

    // ------------------------------------  CONE 7   Z  Y  X-----------------------------------------------------

	ofSetColor(0,255,72);

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(points[i].z, points[i].y,points[i].x);
	}
	ofEndShape();

    // ------------------------------------  CONE 8  -Z -Y -X-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(-points[i].z, -points[i].y,-points[i].x);
	}
	ofEndShape();

    // ------------------------------------  CONE 9   Y  X  Z-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(points[i].y, points[i].x,points[i].z);
	}
	ofEndShape();

    // ------------------------------------  CONE 10  -Y  -X -Z-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(-points[i].y, -points[i].x,-points[i].z);
	}
	ofEndShape();

	    // ------------------------------------  CONE 11   Y  Z  X-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(points[i].y, points[i].z,points[i].x);
	}
	ofEndShape();

    // ------------------------------------  CONE 12  -Y  -Z -X-----------------------------------------------------

	ofBeginShape();
	for (int i = 0; i < points.size(); i++) { // This creates the curve, connects each point as a vertex of the same line.
		ofVertex(-points[i].y, -points[i].z,-points[i].x);
	}
	ofEndShape();


    glDisable(GL_DEPTH_TEST);
    ofDisableLighting();
    light.disable();
    cam.end();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

    if (key == 'f'){
        ofToggleFullscreen();
    }
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
