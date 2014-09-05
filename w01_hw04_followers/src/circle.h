#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "ofMain.h"

class circle
{
    public:

        circle();

        void setup();
		void update();
		void draw();

        int sizeCircle;
        void parseToCircle(float _mapMouseX, float _mapMouseY, float _changeSpeed, int _circleAlpha);
        int mapMouseX;
        int mapMouseY;
        int circleAlpha;
        float chaseX, chaseY;
        float changeSpeed;

    protected:
    private:



};

#endif // CIRCLE_H
