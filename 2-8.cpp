#include <iostream>
#include <string>
using namespace std;

int main() {
    char a[100];
    char max[100] = { 'a' };

    cout << "5���� �̸��� ';'�� �����Ͽ� �Է��ϼ���" << endl << ":";
    for (int i = 1; i <= 5; i++) {
        cin.getline(a, 100, ';');
        cout << i << " : " << a << endl;

        if (strlen(max) < strlen(a)) {
            for (int j = 0; j < 100; j++) {
                max[j] = a[j];
            }
        }
    }
    cout << "���� �� �̸��� " << max << endl;
}
//������ �ֱ� �ߴµ� ���� �� �̸� ��� ����� �𸣰���