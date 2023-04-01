#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int order;
	int totalSale = 0;
	char coffee[20];
	int num;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
	while(true){
		cout << "주문 >> ";
		cin >> coffee >> num;
		if (strcmp(coffee, "에스프레소") == 0) {
			order = num * 2000;
			totalSale += order;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			order = num * 2300;
			totalSale += order;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			order = num * 2500;
			totalSale += order;
		}
		cout << order << "원입니다. 맛있게 드세요." << endl;
		if (totalSale >= 20000) {
			cout << "오늘" << totalSale << "원을 판매하여 문을 닫습니다." << endl;
			break;
		}
	}

	
}