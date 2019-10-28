/*
 * Rect.h
 *
 *  Created on: Sep 7, 2019
 *      Author: triforce
 */

#ifndef RECT_H_
#define RECT_H_
class IntVector;
class Rect {
public:
	float x, y, w, h;
	Rect(float x, float y, float w, float h) : x(x), y(y), w(w), h(h) {

	}
	Rect() : x(0), y(0), w(0), h(0) {
	}
	float Area();
};

Rect operator+(Rect r, IntVector v);
Rect Union(Rect r1, Rect r2);
bool RectOverlap(Rect r1, Rect r2);

#endif /* RECT_H_ */
