//
//  Voxel.cpp
//  Voxel Class -  2d Pixel to 3d Voxel Matrix
//  2d Pixel to 3d Voxel Matrix - with Mesh Export
//
//  Created by Daniel Mastretta 11/2014.
//  Special thanks: Gabriel Gianordoli, Jorge Proaño, Patricio Gonzalez Vivo.
//

#include "Voxel.h"

Voxel::Voxel() {


}

void Voxel::setInit(ofPoint _pos, int _siz, ofColor _voxColor){

    voxColor = _voxColor;
    pos = _pos;
    siz = _siz;
    internalVoxel.setPosition(_pos);
    internalVoxel.set(_siz,_siz,_siz);
}

void Voxel::draw(){

    ofSetColor(voxColor);
    //ofDrawBox(pos,siz);
    internalVoxel.draw();

}

vector<ofVec3f> Voxel::getPoints(){
     vector< ofVec3f > vertex = internalVoxel.getMesh().getVertices();
    for (int i = 0 ; i < vertex.size(); i++) {
        vertex[i].x = vertex[i].x+pos.x;
        vertex[i].y = vertex[i].y+pos.y;
        vertex[i].z = vertex[i].z+pos.z;
    }
    return vertex;
}

vector< ofIndexType >Voxel::getConnections(){
      vector< ofIndexType > index = internalVoxel.getMesh().getIndices();
    for (int i = 0; i < index.size(); i++) {
         cout << index[i] << endl;
    }
     cout << "----" << endl;
    return index;
};

ofMesh Voxel::displace(){
    vector< ofVec3f > vertex = internalVoxel.getMesh().getVertices();
    for (int i = 0 ; i < vertex.size(); i++) {
        vertex[i].x = vertex[i].x+pos.x;
        vertex[i].y = vertex[i].y+pos.y;
        vertex[i].z = vertex[i].z+pos.z;
    }

    ofMesh displaced = internalVoxel.getMesh();
    for (int i = 0; i < displaced.getNumVertices(); i++) {
        displaced.setVertex(i, vertex[i]);
        displaced.addColor(voxColor);
    }

    return displaced;
}
