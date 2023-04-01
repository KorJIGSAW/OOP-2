#include <iostream>
using namespace std;

//Ŭ���� ���Ǻ�
class Circle {
	int radius;

public:
	//������ �Լ� -> Ŭ���� �̸��� ����. ���� Ÿ���� ����. �������� ���� �� �ִ�.
	//��ü ������ ��������� �ʱ�ȭ
	Circle(int r) { 
		radius = r; //��ü ������ ��������� �ʱ�ȭ�� ���ÿ� �ϸ�
					//setRadius�� �ʿ伺�� �����.
	}
	void setRadius();
	int getRadius();
	double getArea();
};
//Ŭ���� ������
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
	Circle pizza; //��ü ���� //�������Լ��� ȣ��, �ڵ� ȣ��
	pizza.setRadius();
	// ������ ���
	cout << "���� ������ " << pizza.getArea() << endl;
	// �������� ���
	cout << "�������� " << pizza.getRadius() << endl;

	// ��ü ������ ��������� �ʱ�ȭ - �������Լ�
	Circle donut(5); //�������Լ� Circle(int r) ȣ��
	cout << "���� ������ " << donut.getArea() << endl;
}