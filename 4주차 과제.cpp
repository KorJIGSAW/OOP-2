#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class str {
	string a;
public:
	//문자열을 받는함수
	//문자열중 한글자를 랜덤으로 바꾸는 함수
	//변경된 문자열 출력하는 함수
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
	cout << "아래에 한 줄을 입력하세요.(exit)를 입력하면 종료합니다." << endl;
	while (true) {
		cout << ">>";
	
		s.RanChan();

	}
}
