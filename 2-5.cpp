#include <iostream>
using namespace std;

int main() {
	char a[100];
	int count = 0;
	cout << "���ڵ��� �Է��϶�(100�� �̸�)." << endl;
	cin.getline(a, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (a[i] == 'x') {
			count++;
		}
	}
	cout << "x�� ������" << count << endl;
}