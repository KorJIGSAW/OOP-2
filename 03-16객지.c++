#include <iostream>
using namespace std;

//Ŭ���� ����
class Circle {
	//�ٸ��Լ����� Ŭ�������� ������ �Լ����� �� �� �ְ� ������ִ� �Լ� (ĸ��ȭ ����)
	//public:
	// �ٸ��Լ����� Ŭ�������� ������ �Լ����� �� �� ���� ������ִ� �Լ�
private: //ĸ��ȭ
	//Ư�� - ��������� ǥ��
	int radius;
public: //ĸ��ȭ ����
	//set��� - �������� 10���μ����ϴ�
	void setRadius() {
		radius = 10;
	}
	//get���
	int getRadius() {
		return radius;
	}
	//���� - ����Լ��� ǥ��
	void getArea() {
		double res;
		res = 3.141592 * radius * radius;
		cout << "���� ������ " << res << endl;
	}
};

int main() {
	Circle pizza; //��ü ����
	pizza.setRadius();
	pizza.getArea();
	//�������� ���
	cout << "�������� " << pizza.getRadius() << endl;
}