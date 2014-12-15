
#pragma once
#include "ofMain.h"

class Vectorfield
{
    public:
        Vectorfield();
        virtual ~Vectorfield();

        void setup(int _width, int _height, int _resolution);

        void draw();
        vector< vector<ofPoint> >table;

        int width, height, resolution;

};
