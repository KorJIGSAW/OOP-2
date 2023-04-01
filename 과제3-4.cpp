#include <iostream>
#include <windows.h>
using namespace std;

class CoffeeMachine {
	int menu;		//주문받을 메뉴번호 변수, 각 재료별 재고변수를 만든다.
	int coffee = 3;
	int water = 5;
	int sugar = 2;

	
public:
	CoffeeMachine() { //생성자 함수
		menu = r;
	}
	void start(); //커피머신 작동시작 알림함수
	void sub(int k); //주문시 각 커피별 재료차감 함수
	void refill(); //재료가 0이될시 모두 10개로 리필하는 함수
	void printmenu(); //메뉴판을 프린트하는 함수
	void printstate(int k); //재료상태를 프린트하는 함수
};

void CoffeeMachine::start() {
	cout << "Coffee Machine Starting...." << endl;
	cout << "(System Message3) : 주문이 가능합니다!" << endl;
}

void CoffeeMachine::sub(int k) { //재료 차감
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

void CoffeeMachine::refill() { //리필
	if (coffee == 0 || water == 0 || sugar == 0) {
		coffee = 10;
		water = 10;
		sugar = 10;
		cout << "(System message2) : 잠시 기다려주세요! 재료를 채우고 있습니다..." << endl;
		cout << "(System message3) : 3초 후 주문이 가능합니다!" << endl << endl;
		Sleep(3000);
	}
}

void CoffeeMachine::printmenu() { //메뉴판
	cout << endl << "--- 메뉴 ---" << endl;
	cout << "1. Espresso" << endl;
	cout << "2. Americano" << endl;
	cout << "3. Sugar Coffee" << endl;
	cout << "4. System Exit" << endl;
	cout << "*메뉴를 선택하세요 : ";
}

void CoffeeMachine::printstate(int k) { //재료 공지
	if (k == 1) {
		cout << endl << ".....[에스프레소] 나왔습니다~" << endl;
		cout << "(System Message1) : 커피머신 상태, 커피:" << coffee << ",   물:" << water << ",   설탕:" << sugar << ")" << endl;
	}
	else if (k == 2) {
		cout << endl <<  ".....[아메리카노] 나왔습니다~" << endl;
		cout << "(System Message1) : 커피머신 상태, 커피:" << coffee << ",   물:" << water << ",   설탕:" << sugar << ")" << endl;
	}
	else if (k == 3) {
		cout << endl <<".....[슈가 커피] 나왔습니다~" << endl;
		cout << "(System Message1) : 커피머신 상태, 커피:" << coffee << ",   물:" << water << ",   설탕:" << sugar << ")" << endl;
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
			cout << endl <<"(System Messgae4) : 판매를 종료합니다!" << endl;
			break;
		}
		cm.sub(j);
		cm.printstate(j);
		cm.refill();
	}
}