#include <iostream>
using namespace std;

//클래스 정의부
class Circle {
	int radius;

public:
	//생성자 함수 -> 클래스 이름과 같다. 리턴 타입이 없다. 여러가지 만들 수 있다.
	//객체 생성시 멤버변수의 초기화
	Circle(int r) { 
		radius = r; //객체 생성시 멤버변수의 초기화를 동시에 하면
					//setRadius의 필요성이 사라짐.
	}
	void setRadius();
	int getRadius();
	double getArea();
};
//클래스 구현부
void Circle::setRadius() {
	radius = 10;
}
int Circle::getRadius() {
	return radius;
}
double Circle::getArea() {
	return radius * radius * 3.141592;
}

int main() {
	Circle pizza; //객체 생성 //생성자함수를 호출, 자동 호출
	pizza.setRadius();
	// 면적을 출력
	cout << "원의 면적은 " << pizza.getArea() << endl;
	// 반지름을 출력
	cout << "반지름은 " << pizza.getRadius() << endl;

	// 객체 생성시 멤버변수를 초기화 - 생성자함수
	Circle donut(5); //생성자함수 Circle(int r) 호출
	cout << "원의 면적은 " << donut.getArea() << endl;
}