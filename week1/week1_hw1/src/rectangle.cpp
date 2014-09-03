//this is the class implementation file, here we tell the thing how to behave.

#include "rectangle.h"


//--------------------------------------

rectangle::rectangle(){  //constructor for my class

}

void rectangle::setup(){
 sqSize= 20;
 pos.x = sqSize/2;

}

void rectangle::update(){
pos.x = pos.x + .0005f;
}

void rectangle::draw(){
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(150,50,60);
    ofRect(pos.x,(ofGetHeight()/2),sqSize,sqSize);
}
