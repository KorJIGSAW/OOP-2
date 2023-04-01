#include <iostream>
#include <string>
using namespace std;

int main() {

    int order; // 주문 금액
    int totalSale = 0; // 판매 총 금액

    string coffee; // 커피 이름
    int num; // 개수

    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;

    while (true) {
        cout << "커피 주문을 해주세요(이름, 잔의 수를 입력)>> ";
        cin >> coffee >> num;

        if (num <= 0) { // 잔 수를 양수가 아니게 입력한 경우
            cout << "잔 수는 양수를 입력해주세요" << endl;
        }

        if (coffee == "에스프레소") {
            order = 2000 * num;
        }

        else if (coffee == "아메리카노") {
            order = 2300 * num;
        }

        else if (coffee == "카푸치노") {
            order = 2500 * num;
        }

        else {
            order = 0;
        }

        if (order > 0) {
            cout << "주문하신 " << coffee << "나왔습니다. 가격은 " << order << "원입니다." << endl;
        }

        else {
            cout << "잘못된 주문입니다. 다시 확인해 주세요" << endl;
        }

        totalSale = totalSale + order;

        if (totalSale > 20000) {
            cout << "오늘 매출: " << totalSale << "원" << endl << "***영업을 종료합니다***" << endl;
            break;
        }
    }

}