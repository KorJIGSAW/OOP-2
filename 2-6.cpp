#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char key[20];
	char check[20];

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> key;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> check;

	if(strcmp(check, key) == 0){
		cout << "�����ϴ�." << endl;
	}
	else {
		cout << "���� �ʽ��ϴ�." << endl;
	}
}