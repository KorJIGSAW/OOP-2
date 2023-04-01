#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string password;
	cout << "프로그램을 종료하려면 알맞는 암호를 입력하시오." << endl;
	while (true) {
		cout << "암호 ->";
		cin >> password;
		if (password == "C++") {
			cout << "프로그램 정상종료." << endl;
			break;
		}
		else {
			cout << "암호 오류 재입력 바람." << endl;
		}
	}
}