#include <iostream>
using namespace std;

class Add {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate() {
		return a + b;
	}
};

class Sub {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate() {
		return a - b;
	}
};

class Mul {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate() {
		return a * b;
	}
};

class Div {
	int a, b;
public:
	void setValue(int x, int y);
	int calculate() {
		return a / b;
	}
};

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}

int main() {
	class Add a;
	class Sub s;
	class Mul m;
	class Div d;

	int x, y;
	char z;
	while (1) {
		cout << "두 정수와 연산자를 입력하세요 >> ";
		cin >> x >> y >> z;
		if (z == '+') {
			a.setValue(x, y);
			cout << a.calculate() << endl;
		}
		else if (z == '-') {
			s.setValue(x, y);
			cout << s.calculate() << endl;
		}
		else if(z == '*'){
			m.setValue(x, y);
			cout << m.calculate() << endl;
		}
		else if (z == '/') {
			d.setValue(x, y);
			cout << d.calculate() << endl;
		}
		else {
			cout << "잘못 입력하셨습니다." << endl;
		}
	}
}