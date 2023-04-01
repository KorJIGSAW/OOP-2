#include <iostream>
using namespace std;

class Exp {
	int b, e;
public:
	Exp(int b, int e) {
		this->b = b; 
		this->e = e;
	}

	Exp(int b) {
		this->b = b; this->e = 1;
	}

	Exp() {
		this->b = 1; this->e = 1;
	}

	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};

int Exp::getValue() {
	int res = 1;
	for (int i = 1; i <= e; i++) {
		res *= b;
	}
	return res;
}

int Exp::getBase() {
	return b;
}

int Exp::getExp() {
	return e;
}

bool Exp::equals(Exp b) {
	if (getValue() == b.getValue()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;

	cout << a.getValue() << ' ' << b.getValue() << ' ' << c.getValue() << endl;
	cout << "a의 베이스 " << a.getBase() << ',' << "지수 " << a.getExp() << endl;

	if (a.equals(b))
		cout << "same" << endl;
	else
		cout << "not same" << endl;
}