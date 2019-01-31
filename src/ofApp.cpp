#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//btn"number"(x pos, ypos, width ,height);
	//head
		top1.set(0, 0, 1920, 100);
		top2.set(0, 100, 1920, 4);
		//sideleft
		side1.set(0, 104, 300, 1080);
		side2.set(300, 104, 4, 1080);
		side3.set(300, 274 ,4, 130);
		//sideright
		side4.set(1620,104,300,1080);
		side5.set(1616, 104, 4, 1080);
		
		//buttons
		btn1.set(20, 124, 260, 130);
		
		btn3.set(20, 424, 260, 130);
		btn4.set(20, 574, 260, 130);
		btn5.set(20, 724, 260, 130);

		btn2.set(1640, 274, 260, 130);
		btn7.set(1640, 124, 260, 130);
		btn8.set(1640, 724, 260, 130);
		btn9.set(1640, 424, 260, 130);
		btn10.set(1640, 574, 260, 130);
		//highlighted
	
		btn6.set(20, 274, 280, 130);

		//middle

		mid1.set(340, 224, 1236, 400);
		mid2.set(304, 104, 1312, 910);

		
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
	//head
	ofSetColor(192, 222, 237);
	ofDrawRectangle(top1);
	ofSetColor(0, 36, 135);
	ofDrawRectangle(top2);
	ofDrawBitmapString("Twitter Bot", 900, 50);
	//sideLeft
	ofSetColor(192, 222, 237);
	ofDrawRectangle(side4);
	ofSetColor(0, 36, 135);
	ofDrawRectangle(side5);
	//sideRight
	ofSetColor(192, 222, 237);
	ofDrawRectangle(side1);
	ofSetColor(0, 36, 135);
	ofDrawRectangle(side2);
	ofSetColor(0, 8, 31);
	ofDrawRectangle(side3);
	//buttons
	ofSetColor(0, 172, 237);
	ofDrawRectangle(btn1);
	ofDrawRectangle(btn2);
	ofDrawRectangle(btn3);
	ofDrawRectangle(btn4);
	ofDrawRectangle(btn5);

	ofDrawRectangle(btn7);
	ofDrawRectangle(btn8);
	ofDrawRectangle(btn9);
	ofDrawRectangle(btn10);
	ofDrawRectangle(btn11);
	//highlited button
	ofSetColor(0, 132, 180);
	ofDrawRectangle(btn6);

	//Mid
	ofSetColor(255);
	ofDrawRectangle(mid2);
	ofSetColor(0, 132, 180);
	ofDrawRectangle(mid1);

	//sideText
	ofSetColor(255);
	ofDrawBitmapString("Total Tweets", 100, 190);
	ofDrawBitmapString("Money", 100, 340);
	ofDrawBitmapString("Politicis", 100, 490);
	ofDrawBitmapString("Paris", 100, 640);
	ofDrawBitmapString("DreamWorks", 100, 790);
	ofDrawBitmapString("Uber", 1720, 190);
	ofDrawBitmapString("Donald Trump", 1720, 340);
	ofDrawBitmapString("Vegans", 1720, 490);
	ofDrawBitmapString("Custom Search", 1720, 640);
	ofDrawBitmapString("Custom Search ", 1720, 790);

	//midText
	ofDrawBitmapString("Total Tweets mentioning money is",790, 330);
	ofDrawBitmapString("3000", 900, 345);
}
//--------------------------------------------------------------
