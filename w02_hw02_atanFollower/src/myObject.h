
#pragma once
#include "ofMain.h"

class myObject : public ofPoint {

public:

    void init(ofPoint _pos, int _i, ofColor _color);
    void update(ofPoint _mouse);
    void draw();

    ofPoint size;
    ofPoint vel;
    ofPoint accel;
    ofColor color;
    float angle;
    vector<ofPoint> tail;
};
