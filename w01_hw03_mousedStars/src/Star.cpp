#include "Star.h"

void Star::setup(){
    nSides = 12;
    radius = 80;
    pos.set(ofGetWidth()/2, ofGetHeight()/2);
    generalAngle = 0;
}

void Star::update(){
    generalAngle += .10;
}

void Star::draw(){
    ofPushMatrix();
        ofTranslate(pos);
        ofRotate(generalAngle);
        ofNoFill();
        ofSetColor(255/(pct*.2),255,255,255);
        //Star
        float radius2 = 3*radius;
        float radius1 = radius;
        bool useRadius1 = true;

        ofBeginShape(); //-------------------------------------------------- STAR 1
        for(int angle = 0; angle <= 360; angle += 360/nSides){
            float radius;
            if(useRadius1) radius = radius1;
            else radius = radius2;
            float y = sin(ofDegToRad(angle))*radius;
            float x = cos(ofDegToRad(angle))*radius;
            ofVertex(x, y);
            useRadius1 = !useRadius1; //Setting the bool to the opposite value
        }
        ofEndShape();

  ofSetColor(255,255/(pct*.2),255,200);
        ofBeginShape(); //-------------------------------------------------- STAR 2
        for(int angle = -10; angle <= 360; angle += 360/nSides){
            float radius;
            if(useRadius1) radius = radius1*(pct);
            else radius = radius2;
            float y = sin(ofDegToRad(angle))*radius;
            float x = cos(ofDegToRad(angle))*radius;
            ofVertex(x, y);
            useRadius1 = !useRadius1; //Setting the bool to the opposite value
        }
        ofEndShape();
  ofSetColor(255,255,255/(pct*.2),100);
        ofBeginShape(); //-------------------------------------------------- STAR 3
        for(int angle = -20; angle <= 360; angle += 360/nSides){
            float radius;
            if(useRadius1) radius = radius1*(pct*.5);
            else radius = radius2;
            float y = sin(ofDegToRad(angle))*radius;
            float x = cos(ofDegToRad(angle))*radius;
            ofVertex(x, y);
            useRadius1 = !useRadius1; //Setting the bool to the opposite value
        }
        ofEndShape();
ofSetColor(255,255,255,50/(pct*.2));
        ofBeginShape(); //-------------------------------------------------- STAR 4
        for(int angle = -30; angle <= 360*pct; angle += 360/nSides){
            float radius;
            if(useRadius1) radius = radius1;
            else radius = radius2*(pct*.1);
            float y = sin(ofDegToRad(angle))*radius;
            float x = cos(ofDegToRad(angle))*radius;
            ofVertex(x, y);
            useRadius1 = !useRadius1; //Setting the bool to the opposite value
        }
        ofEndShape();
    ofPopMatrix();
}

void Star::getMappedMouse(int mapMouse){
pct = mapMouse;


}
