#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() {
	radius = 1;
	cout << "������ ���� : " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� : " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� : " <<  radius << endl;
}

void Circle::SetRadius(int r) {
	radius = r;
}

double Circle::getArea() {
	return radius * radius * 3.141592;
}