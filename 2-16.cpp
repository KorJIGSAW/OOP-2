#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

void print(int c) {
	for (int i = 0; i < c; i++) {
		cout << "*";
	}
}

int main() {
	char buf[10000];
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(buf, 10000, ';');

	for (char j = 'a'; j < 'z' + 1; j++) {
		int count = 0;
		for (int i = 0; i < 10000; i++) {
			if (buf[i] > 64 && buf[i] < 91) {
				buf[i] = tolower(buf[i]);
			}
			if (buf[i] == j) {
				count++;
			}
			if(i == 9999 && count > 9){
				cout << j << "(" << count << ")  : ";
				print(count);
				cout << endl;
			}
			else if(i == 9999 && count <=9) {
				cout << j << "(" << count << ")   : ";
				print(count);
				cout << endl;
			}
		}
	}
	Sleep(100000);
}