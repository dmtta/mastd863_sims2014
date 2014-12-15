//  2d Pixel to 3d Voxel Matrix - with Mesh Export
//
//  Created by Daniel Mastretta 11/2014.
//  Special thanks: Gabriel Gianordoli, Jorge Proaño, Patricio Gonzalez Vivo.
//
//
#pragma once


#include "ofMain.h"


class Voxel
{
    public:
        Voxel();

        void draw();
        void update();
        vector<ofVec3f> getPoints();
        vector< ofIndexType >getConnections();

    ofMesh displace();


        ofPoint pos;
        int siz;
        ofColor voxColor;

        float boxSize;
        void setInit(ofPoint _pos, int _siz, ofColor _voxColor);
        ofBoxPrimitive internalVoxel;

    protected:
    private:
};
