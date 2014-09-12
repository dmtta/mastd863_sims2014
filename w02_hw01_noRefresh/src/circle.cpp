#include "ofMain.h"
#include "circle.h"

circle::circle()
{

}

//------------------------------------------------------------------
void circle::setup(){

radius = 10;
speedX = 0.25;
speedY = 0.25;


}

//------------------------------------------------------------------
void circle::update(){

    posX = posX+speedX;
    posY = posY+speedY;

    if (posX>=ofGetWidth() || posX<=0){
        speedX = speedX*-1;
    }

    if (posY>=ofGetHeight() || posY<=0){
    speedY = speedY*-1;
    }
}

//------------------------------------------------------------------
void circle::draw() {

ofFill();
ofSetColor(255,0,0);
ofCircle(posX,posY,radius);

}

