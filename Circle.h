#pragma once //������ include �Ǹ� ������ ���⶧���� ����å.
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

