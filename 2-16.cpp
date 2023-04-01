#include <iostream>
#include <cstring>

using namespace std;

void print(int c) {
	for (int i = 0; i < c; i++) {
		cout << "*";
	}
}

int main() {
	char buf[10000];
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(buf, 10000, ';');

	for(char j = 'a'; j < 'z'+1; j++) {
		int count = 0;
		for (int i = 0; i < 10000; i++) {
			if (buf[i] > 64 && buf[i] < 91) {
				buf[i] = tolower(buf[i]);
			}
			if (buf[i] == j) {
				count++;
			}
			cout << j << "[" << count << "] : " << print(count) << endl;
		}
	}
	



}