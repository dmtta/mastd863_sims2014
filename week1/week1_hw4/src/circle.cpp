#include "circle.h"
//------------------------------------------------------------------
circle::circle()
{


}
//------------------------------------------------------------------
void circle::setup(){

sizeCircle = 20;

}

//------------------------------------------------------------------
void circle::update(){

chaseX = changeSpeed*mapMouseX+(1-changeSpeed)*chaseX;
chaseY = changeSpeed*mapMouseY+(1-changeSpeed)*chaseY;

}

//------------------------------------------------------------------
void circle::draw() {

ofFill();
ofSetColor(255,0,0,circleAlpha);
ofCircle(chaseX,chaseY,10);

}

//------------------------------------------------------------------
void circle::parseToCircle(float _mapMouseX, float _mapMouseY, float _changeSpeed, int _circleAlpha) {

mapMouseX = _mapMouseX;
mapMouseY = _mapMouseY;
changeSpeed = _changeSpeed;
circleAlpha = _circleAlpha;

}

