#pragma once //여러번 include 되면 오류가 나기때문에 방지책.
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void SetRadius(int r);
	double getArea();

};

#endif

