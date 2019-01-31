#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		//head
		ofRectangle top1, top2;
		//sideleft
		ofRectangle side1, side2, side3;
		//sidetight
		ofRectangle side4, side5;
		//buttons
		ofRectangle btn1, btn2, btn3, btn4, btn5, btn6, btn7, btn8, btn9, btn10, btn11;
		//middle

		ofRectangle mid1, mid2;
};
