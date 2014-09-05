#include "rectangle.h"


//------------------------------------------------------------------
rectangle::rectangle(){

}

void rectangle::setup(){

}

//------------------------------------------------------------------
void rectangle::update(){

}

//------------------------------------------------------------------
void rectangle::draw() {

	ofNoFill();
    ofSetColor(ofColor::white);
    ofRect(pos1.x, pos1.y, pos2.x-pos1.x,pos2.y-pos1.y);
    ofSetColor(0,0,255);
    ofCircle(pos1.x,pos1.y,10);
    ofSetColor(255,0,0);
    ofCircle(pos2.x,pos2.y,10);
}
