#include "Vectorfield.h"

Vectorfield::Vectorfield()
{

}

Vectorfield::~Vectorfield()
{

}

void Vectorfield::setup(int _w, int _h, int _res){

width = _w;
height = _h;
resolution = _res;


cols = fieldWidth/res;
rows = fieldWidth/res;

for(int x = 0; x<cols;x++){

    vector<ofPoint> column;
    column.resize(rows);
    table.push_back(column);

    for (int y=0;y<rows;y++){
        table[x][y] = ofPoint(ofRandom(-10,10),ofRandom(-10,10));
    }
}
}

void Vectorfield::draw(){

 for (int x=0;x<table.size();x++){
    for (int y=0;)
 }

}
