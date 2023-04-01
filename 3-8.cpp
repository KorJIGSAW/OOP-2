#include <iostream>
#include <string>
using namespace std;

class Integer {
	int n;
public:
	Integer(int r) {
		n = r;
	}
	Integer(string a) {
		n = stoi(a);
	}
	void set(int r) {
		n = r;
	}
	int get() {
		return n;
	}
	int isEven() {
		return !(n % 2); //È¦Â¦ ÆÇº°½Ã
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}