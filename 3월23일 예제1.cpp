#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int r);
	Circle();
	~Circle() {}
	double getArea();
};

Circle::Circle(int r) {
	radius = r;
}

Circle::Circle() {
	radius = 1;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	//포인터 변수 선언
	Circle* p;
	p = &donut;
	//세 값다 같은 것을 가리킨다.
	//p = &donut이니까
	//*p = donut
	cout << "도넛의 면적 : " << donut.getArea() << endl;
	cout << "도넛의 면적 : " << p->getArea() << endl;
	cout << "도넛의 면적 : " << (*p).getArea() << endl;

	//객체 배열 선언
	Circle circleArray[3]; // 3개다 생성자 함수 Circle을 호출하므로 radius 는 모두 1로 설정된다.
	for (int i = 0; i < 3; i++) {
		cout << "배열 " << i << "의 면적 : " << circleArray[i].getArea() << endl;
	}

	//객체 배열 + 포인터
	//Circle형 포인터 ap에 circleArray[0]의 주솟값을 담는다.
	Circle* ap = &circleArray[0];

	//ap를 1씩 증가시킬때마다 0에서 1의 주솟값 1에서 2의 주솟값으로 바뀌면서 프린트된다.
	for (int i = 0; i < 3; i++) {
		cout << "배열 " << i << "의 면적 : " << (ap+1)->getArea() << endl;
		//ap++;
		//(ap + 1) = ap++;
	}
	
	//객체 배열의 초기값을 설정하는 생성자 함수의 호출
	//0 -> 반지름 10으로 초기화
	//1 -> 반지름 20으로 초기화
	//2 -> 반지름 1로 초기화
	//0과1은 같은 생성자함수 호출 2는 다른 생성자함수를 호출함.
	Circle cA[3] = {Circle(10), Circle(20), Circle()};

	for (int i = 0; i < 3; i++) {
		cout << "배열 " << i << "의 면적 : " << (cA + i)->getArea() << endl;
	}

	//동적할당
	//하나가 생성되면서 q1에 주소가 저장된다.
	Circle* q1 = new Circle;
	Circle* q2 = new Circle(30);
	cout << q1->getArea() << endl;
	cout << q2->getArea() << endl;

	delete q1, q2;
}