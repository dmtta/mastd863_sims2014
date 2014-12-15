#include "myObject.h"

void myObject::init(ofPoint _pos, int _i, ofColor _color){
    set(_pos);
    size.set(60, 30);
    vel.set(0, 0);
    accel.set(0, 0);
    color = _color;
}


// update is recieving the mouse position from ofApp,

void myObject::update(ofPoint _target){
    ofPoint diff = _target - *this;
    accel = diff.normalize() * 0.4;
    vel += accel;
    *this += vel;
    vel.limit(5);

    angle = atan2(diff.y, diff.x);
    // Use lerp if you want a sort of angular accelleration instead
    angle = ofLerp(angle, atan2(diff.y,diff.x), 0.1);
    if(angle < 0) {
        angle = TWO_PI - abs(angle);
    }

    ofPoint thisTail;
    thisTail.set(-size.x * 0.5, 0.0);
    tail.push_back(*this);
    if(tail.size() > 30){
        tail.erase(tail.begin());
    }
}

void myObject::draw(){
    ofNoFill();
    ofSetColor(255, 50);
    ofSetLineWidth(2);
    ofBeginShape();
    for(ofPoint it : tail){
        ofVertex(it);
    }
    ofEndShape(false);

    ofPushMatrix();
        ofTranslate(*this);
        ofRotate(ofRadToDeg(angle));
            ofFill();
            ofSetColor(color);
//            ofRect(-size.x, -size.y * 0.5, size.x, size.y);
    ofTriangle(-size.x * 0.5, -size.y*0.5, -size.x * 0.5, size.y*0.5, size.x * 0.5, 0);
    ofPopMatrix();
}
