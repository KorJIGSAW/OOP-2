#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[100];
	char address[100];
	int age;
	cout << "�̸���? ";
	cin.getline(name, 100, '\n');
	cout << "�ּҴ�? ";
	cin.getline(address, 100, '\n');
	cout << "���̴�? ";
	cin >> age;
	cout << name << ", " << address << ", " << age << "��" << endl;
}