#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char key[20];
	char check[20];

	cout << "새 암호를 입력하세요>>";
	cin >> key;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> check;

	if(strcmp(check, key) == 0){
		cout << "같습니다." << endl;
	}
	else {
		cout << "같지 않습니다." << endl;
	}
}