#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int order;
	int totalSale = 0;
	char coffee[20];
	int num;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;
	while(true){
		cout << "�ֹ� >> ";
		cin >> coffee >> num;
		if (strcmp(coffee, "����������") == 0) {
			order = num * 2000;
			totalSale += order;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			order = num * 2300;
			totalSale += order;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			order = num * 2500;
			totalSale += order;
		}
		cout << order << "���Դϴ�. ���ְ� �弼��." << endl;
		if (totalSale >= 20000) {
			cout << "����" << totalSale << "���� �Ǹ��Ͽ� ���� �ݽ��ϴ�." << endl;
			break;
		}
	}

	
}