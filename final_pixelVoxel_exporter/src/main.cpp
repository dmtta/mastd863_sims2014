//  2d Pixel to 3d Voxel Matrix - with Mesh Export
//
//  Created by Daniel Mastretta 11/2014.
//  Special thanks: Gabriel Gianordoli, Jorge Proa�o, Patricio Gonzalez Vivo.
//
//

#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
