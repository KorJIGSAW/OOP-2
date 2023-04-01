#include <iostream>
using namespace std;

int main() {
	char a[100];
	int count = 0;
	cout << "문자들을 입력하라(100개 미만)." << endl;
	cin.getline(a, 100, '\n');
	for (int i = 0; i < 100; i++) {
		if (a[i] == 'x') {
			count++;
		}
	}
	cout << "x의 개수는" << count << endl;
}