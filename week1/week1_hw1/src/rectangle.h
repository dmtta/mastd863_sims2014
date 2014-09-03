// this is the class header file, in here we have the ingrediets thay make a class.

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "ofMain.h"



class rectangle
{
    public:
        rectangle();

        void setup();
        void update(); //declaring the class' update, setup and draw, this are new and can be name any way you want. Its called on the ofApp.cpp
        void draw();

        int sqSize;
        ofPoint pos; // declare an open frameworks point, this is similar to a PVector, has an X and Y embedded inside.

    protected:
    private:
}; // THIS SEMICOLON IS IMPORTANT AND MANY PEOPLE MISS IT

#endif // RECTANGLE_H
