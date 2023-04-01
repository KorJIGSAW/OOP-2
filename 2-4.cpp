#include <iostream>
using namespace std;

int main() {
	double a[5];
	double max;
	cout << "5개의 실수를 입력하라 >> ";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < 4; i++) {
		max = a[i] < a[i + 1] ? a[i + 1] : a[i];
	}
	cout << "제일 큰 수 = " << max;
}