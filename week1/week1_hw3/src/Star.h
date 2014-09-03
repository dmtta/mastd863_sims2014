#pragma once
#include "ofMain.h"

class Star{
public:

    void setup();
    void update();
    void draw();

    int nSides;
    float radius;
    float generalAngle;
    ofPoint pos;
void getMappedMouse(int mapMouse);
float pct;


private:

protected:

};
