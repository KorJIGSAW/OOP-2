#include <iostream>
#include <string>
using namespace std;

int main() {

    int order; // �ֹ� �ݾ�
    int totalSale = 0; // �Ǹ� �� �ݾ�

    string coffee; // Ŀ�� �̸�
    int num; // ����

    cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;

    while (true) {
        cout << "Ŀ�� �ֹ��� ���ּ���(�̸�, ���� ���� �Է�)>> ";
        cin >> coffee >> num;

        if (num <= 0) { // �� ���� ����� �ƴϰ� �Է��� ���
            cout << "�� ���� ����� �Է����ּ���" << endl;
        }

        if (coffee == "����������") {
            order = 2000 * num;
        }

        else if (coffee == "�Ƹ޸�ī��") {
            order = 2300 * num;
        }

        else if (coffee == "īǪġ��") {
            order = 2500 * num;
        }

        else {
            order = 0;
        }

        if (order > 0) {
            cout << "�ֹ��Ͻ� " << coffee << "���Խ��ϴ�. ������ " << order << "���Դϴ�." << endl;
        }

        else {
            cout << "�߸��� �ֹ��Դϴ�. �ٽ� Ȯ���� �ּ���" << endl;
        }

        totalSale = totalSale + order;

        if (totalSale > 20000) {
            cout << "���� ����: " << totalSale << "��" << endl << "***������ �����մϴ�***" << endl;
            break;
        }
    }

}