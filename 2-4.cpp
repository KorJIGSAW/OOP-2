#include <iostream>
using namespace std;

int main() {
	double a[5];
	double max;
	cout << "5���� �Ǽ��� �Է��϶� >> ";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 4; i++) {
		max = a[i] < a[i + 1] ? a[i + 1] : a[i];
	}
	cout << "���� ū �� = " << max;
}