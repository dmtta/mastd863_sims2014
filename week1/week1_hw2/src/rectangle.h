#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ofMain.h"

class rectangle {

	public:

		rectangle();

        void setup();
		void update();
		void draw();

		ofPoint pos1;
		ofPoint pos2;


};

#endif // RECTANGLE_H
