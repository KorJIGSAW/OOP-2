#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "积己磊 角青 : " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "积己磊 角青 : " << radius << endl;
}

Circle::~Circle() {
	cout << "家戈磊 角青 : " <<  radius << endl;
}

void Circle::SetRadius(int r) {
	radius = r;
}

double Circle::getArea() {
	return radius * radius * 3.141592;
}