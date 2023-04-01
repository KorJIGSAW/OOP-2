#include <iostream>
#include <string>
using namespace std;

int main() {
    char a[100];
    char max[100] = { 'a' };

    cout << "5명의 이름을 ';'로 구분하여 입력하세요" << endl << ":";
    for (int i = 1; i <= 5; i++) {
        cin.getline(a, 100, ';');
        cout << i << " : " << a << endl;

        if (strlen(max) < strlen(a)) {
            for (int j = 0; j < 100; j++) {
                max[j] = a[j];
            }
        }
    }
    cout << "가장 긴 이름은 " << max << endl;
}
//변수를 넣긴 했는데 가장 긴 이름 출력 방법을 모르겠음