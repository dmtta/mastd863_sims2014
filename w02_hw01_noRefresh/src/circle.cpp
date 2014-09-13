#include "ofMain.h"
#include "circle.h"

circle::circle()
{
radius = ofRandom(5,15);
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

    pos.x = pos.x+speedX;
    pos.y = pos.y+speedY;

    if (pos.x+radius/2>=ofGetWidth() || pos.x<=0+radius/2){
        speedX = speedX*-1;
    }

    if (pos.y+radius/2>=ofGetHeight() || pos.y<=0+radius/2){
    speedY = speedY*-1;
    }
}

//------------------------------------------------------------------
void circle::draw() {

ofSetColor(255,0,0);
ofCircle(pos, radius);

}

