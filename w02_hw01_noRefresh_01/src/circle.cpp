#include "ofMain.h"
#include "circle.h"

circle::circle()
{
radius = ofGetWidth()*(ofRandom(0.001,0.005));
speedX = ofRandom(0.05,.10);
speedY = ofRandom(0.05,.10);

pos.x = ofGetWindowWidth()*0.5;
pos.y = ofGetWindowHeight()*0.5;
pos.z = 0.0;

}

void circle::setInit(ofPoint _pos){
    pos = _pos;

}

//------------------------------------------------------------------
void circle::update(){

    pos.x = pos.x;
    pos.y = pos.y+speedY;



    if (pos.y+radius/2>=ofGetHeight() || pos.y<=0+radius/2){
    speedY = speedY*-1;
    }
}

//------------------------------------------------------------------
void circle::draw() {

ofSetColor(255,0,0);
ofCircle(pos, radius);

}

