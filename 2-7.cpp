#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];

	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(str, 100, ';');

		if (strcmp(str, "yes") == 0) {
			cout << "�����մϴ�..." << endl;
			break;
		}
	}
}