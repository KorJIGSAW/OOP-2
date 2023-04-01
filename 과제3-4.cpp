#include <iostream>
#include <windows.h>
using namespace std;

class CoffeeMachine {
	int menu;		//�ֹ����� �޴���ȣ ����, �� ��Ằ ������� �����.
	int coffee = 3;
	int water = 5;
	int sugar = 2;

	
public:
	CoffeeMachine() { //������ �Լ�
		menu = r;
	}
	void start(); //Ŀ�Ǹӽ� �۵����� �˸��Լ�
	void sub(int k); //�ֹ��� �� Ŀ�Ǻ� ������� �Լ�
	void refill(); //��ᰡ 0�̵ɽ� ��� 10���� �����ϴ� �Լ�
	void printmenu(); //�޴����� ����Ʈ�ϴ� �Լ�
	void printstate(int k); //�����¸� ����Ʈ�ϴ� �Լ�
};

void CoffeeMachine::start() {
	cout << "Coffee Machine Starting...." << endl;
	cout << "(System Message3) : �ֹ��� �����մϴ�!" << endl;
}

void CoffeeMachine::sub(int k) { //��� ����
	if (k == 1) {
		coffee--;
		water--;
	}
	else if (k == 2) {
		coffee--;
		water = water - 2;
	}
	else if (k == 3) {
		coffee--;
		water = water - 2;
		sugar--;
	}
}

void CoffeeMachine::refill() { //����
	if (coffee == 0 || water == 0 || sugar == 0) {
		coffee = 10;
		water = 10;
		sugar = 10;
		cout << "(System message2) : ��� ��ٷ��ּ���! ��Ḧ ä��� �ֽ��ϴ�..." << endl;
		cout << "(System message3) : 3�� �� �ֹ��� �����մϴ�!" << endl << endl;
		Sleep(3000);
	}
}

void CoffeeMachine::printmenu() { //�޴���
	cout << endl << "--- �޴� ---" << endl;
	cout << "1. Espresso" << endl;
	cout << "2. Americano" << endl;
	cout << "3. Sugar Coffee" << endl;
	cout << "4. System Exit" << endl;
	cout << "*�޴��� �����ϼ��� : ";
}

void CoffeeMachine::printstate(int k) { //��� ����
	if (k == 1) {
		cout << endl << ".....[����������] ���Խ��ϴ�~" << endl;
		cout << "(System Message1) : Ŀ�Ǹӽ� ����, Ŀ��:" << coffee << ",   ��:" << water << ",   ����:" << sugar << ")" << endl;
	}
	else if (k == 2) {
		cout << endl <<  ".....[�Ƹ޸�ī��] ���Խ��ϴ�~" << endl;
		cout << "(System Message1) : Ŀ�Ǹӽ� ����, Ŀ��:" << coffee << ",   ��:" << water << ",   ����:" << sugar << ")" << endl;
	}
	else if (k == 3) {
		cout << endl <<".....[���� Ŀ��] ���Խ��ϴ�~" << endl;
		cout << "(System Message1) : Ŀ�Ǹӽ� ����, Ŀ��:" << coffee << ",   ��:" << water << ",   ����:" << sugar << ")" << endl;
	}
}

int main() {
	CoffeeMachine cm(1);
	int j;
	cm.start();
	while (1) {
		cm.printmenu();
		cin >> j;
		if (j == 4) {
			cout << endl <<"(System Messgae4) : �ǸŸ� �����մϴ�!" << endl;
			break;
		}
		cm.sub(j);
		cm.printstate(j);
		cm.refill();
	}
}