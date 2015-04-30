//  2d Pixel to 3d Voxel Matrix - with Mesh Export
//
//  Created by Daniel Mastretta 11/2014.
//  Special thanks: Gabriel Gianordoli, Jorge Proaño, Patricio Gonzalez Vivo.
//
//

#pragma once

#include "ofMain.h"
#include "Voxel.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();
    void saveMesh();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    ofImage front;
    ofImage right;
    ofImage top;
    ofColor voxColor;
    ofPoint pos;

    ofEasyCam cam;
    ofLight light;

    vector <Voxel> myVoxels;

};
