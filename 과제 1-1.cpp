#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string password;
	cout << "���α׷��� �����Ϸ��� �˸´� ��ȣ�� �Է��Ͻÿ�." << endl;
	while (true) {
		cout << "��ȣ ->";
		cin >> password;
		if (password == "C++") {
			cout << "���α׷� ��������." << endl;
			break;
		}
		else {
			cout << "��ȣ ���� ���Է� �ٶ�." << endl;
		}
	}
}