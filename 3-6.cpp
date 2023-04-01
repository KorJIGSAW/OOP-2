#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

class Random {
	int k;
public:
	int next() {
		int n = rand();
		if (n % 2 == 1) {
			return next();
		}
		else {
			return n;
		}
	}

	int nextInRange(int a, int b) {
		int n = rand() % (b - a + 1) + a;
		if (n % 2 == 1) {
			return nextInRange(a, b);
		}
		else {
			return n;
		}
	}
};

int main() {
	srand((unsigned)time(0));
	Random r;
	cout << "-- 0����" << RAND_MAX << "������ ���� ¦�� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "9 ������ ���� ¦�� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}