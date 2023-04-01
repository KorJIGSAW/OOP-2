#include <iostream>
using namespace std;

//클래스 정의
class Circle {
	//다른함수에서 클래스안의 변수나 함수들을 쓸 수 있게 만들어주는 함수 (캡슐화 포기)
	//public:
	// 다른함수에서 클래스안의 변수나 함수들을 쓸 수 없게 만들어주는 함수
private: //캡슐화
	//특성 - 멤버변수로 표현
	int radius;
public: //캡슐화 포기
	//set기능 - 반지름을 10으로설정하다
	void setRadius() {
		radius = 10;
	}
	//get기능
	int getRadius() {
		return radius;
	}
	//행위 - 멤버함수로 표현
	void getArea() {
		double res;
		res = 3.141592 * radius * radius;
		cout << "원의 면적은 " << res << endl;
	}
};

int main() {
	Circle pizza; //객체 생성
	pizza.setRadius();
	pizza.getArea();
	//반지름을 출력
	cout << "반지름은 " << pizza.getRadius() << endl;
}