#include <iostream>
#include <cstring>
using namespace std;

class Account {
	string Owner;
	int num;
	int cash;
public:
	Account(string a, int b, int c) {
		Owner = a;
		num = b;
		cash = c;
	}

	string getOwner() {
		return Owner;
	}

	int inquiry() {
		return cash;
	}

	int withdraw(int r) {
		cash -= r;
		return cash;
	}
	void deposit(int r) {
		cash += r;
	}
};

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}