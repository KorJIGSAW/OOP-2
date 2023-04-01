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
	//������ ���� ����
	Circle* p;
	p = &donut;
	//�� ���� ���� ���� ����Ų��.
	//p = &donut�̴ϱ�
	//*p = donut
	cout << "������ ���� : " << donut.getArea() << endl;
	cout << "������ ���� : " << p->getArea() << endl;
	cout << "������ ���� : " << (*p).getArea() << endl;

	//��ü �迭 ����
	Circle circleArray[3]; // 3���� ������ �Լ� Circle�� ȣ���ϹǷ� radius �� ��� 1�� �����ȴ�.
	for (int i = 0; i < 3; i++) {
		cout << "�迭 " << i << "�� ���� : " << circleArray[i].getArea() << endl;
	}

	//��ü �迭 + ������
	//Circle�� ������ ap�� circleArray[0]�� �ּڰ��� ��´�.
	Circle* ap = &circleArray[0];

	//ap�� 1�� ������ų������ 0���� 1�� �ּڰ� 1���� 2�� �ּڰ����� �ٲ�鼭 ����Ʈ�ȴ�.
	for (int i = 0; i < 3; i++) {
		cout << "�迭 " << i << "�� ���� : " << (ap+1)->getArea() << endl;
		//ap++;
		//(ap + 1) = ap++;
	}
	
	//��ü �迭�� �ʱⰪ�� �����ϴ� ������ �Լ��� ȣ��
	//0 -> ������ 10���� �ʱ�ȭ
	//1 -> ������ 20���� �ʱ�ȭ
	//2 -> ������ 1�� �ʱ�ȭ
	//0��1�� ���� �������Լ� ȣ�� 2�� �ٸ� �������Լ��� ȣ����.
	Circle cA[3] = {Circle(10), Circle(20), Circle()};

	for (int i = 0; i < 3; i++) {
		cout << "�迭 " << i << "�� ���� : " << (cA + i)->getArea() << endl;
	}

	//�����Ҵ�
	//�ϳ��� �����Ǹ鼭 q1�� �ּҰ� ����ȴ�.
	Circle* q1 = new Circle;
	Circle* q2 = new Circle(30);
	cout << q1->getArea() << endl;
	cout << q2->getArea() << endl;

	delete q1, q2;
}