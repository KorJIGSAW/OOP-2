#include <iostream>
using namespace std;

class Exp {
	int base;
	int exp;
public:
	Exp(int b, int e);
	Exp(int b);
	Exp();

	int getValue();
	int getBase();
	int getExp();
};

Exp::Exp(int b, int e) {
	base = b;
	exp = e;
}

Exp::Exp(int b) {
	base = b;
	exp = 1;
}

Exp::Exp() {
	base = 1;
	exp = 1;
}

int getValue() {
	int sum = 0;
	for(int i = 0; i< )
}

int main() {
	Exp a(3, 2);
	Exp b(9);
	Exp c;
}