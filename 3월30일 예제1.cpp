#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	int k, n;
	int count = 0;
	//���� �Ҵ� - �����߿� �Ҵ�ȴ�. (���� �Ҵ�)
	//���̶�� �޸𸮿� �Ҵ��Ѵ�.
	cout << "������ ��ü�� ���� �Է� : ";
	cin >> k;
	Circle *pArray = new Circle[k]; //Circle �ڷ����� ���� pArray�� ������ ������ �����ϰ� �����Ҵ��Ѵ�. �⺻�����ڰ� ȣ��ȴ�.
	for (int i = 0; i < k; i++) {
		cout << "��" << i+1 << " : ";
		cin >> n;
		pArray[i].SetRadius(n);
		//���� ������ 100���� ũ�� 200���� ���� ��ü�� ���� ī����
		if (pArray[i].getArea() > 100 && pArray[i].getArea() < 200) {
			count++;
		}
		cout << "pArray[" << i << "]�� ���� : " << pArray[i].getArea() << endl;
	}
	
	cout << "���� ������ 100���� ũ�� 200���� ���� ��ü�� �� : " << count << "�� �̴�." << endl;
	
	Circle *p = pArray; //�ּҸ� �޾ƾ��ϹǷ� ����p�� ������ �����̴�.
	for (int i = 0; i < k; i++) {
		cout << "pArray[" << i << "]�� ���� : " << p->getArea() << endl;
		p++;
	}
	delete[] pArray; //�迭�� �Ҹ��ڷ� ȣ���ؾ��ϹǷ� delete[]�� �ȴ�.
}