#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class str {
	string a;
public:
	//���ڿ��� �޴��Լ�
	//���ڿ��� �ѱ��ڸ� �������� �ٲٴ� �Լ�
	//����� ���ڿ� ����ϴ� �Լ�
	string GetData();
	void RanChan(string exp);
	void print(char exp[]);
};

string str::GetData() {
	cin >> a;
}

void str::RanChan(string exp) {
	int len = size(exp);
	srand((unsigned)time(0));
	int n = rand() % len;
	exp[n] = rand() % 26 + 97;
}

void str::print(char exp[]) {
	int len = strlen(exp);
	for (int i = 0; i < len; i++) {
		cout << exp[i];
	}
	cout << endl;
}


int main() {
	str s;
	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit)�� �Է��ϸ� �����մϴ�." << endl;
	while (true) {
		cout << ">>";
	
		s.RanChan();

	}
}
