#include <iostream>
using namespace std;


int main(){
    cout << "너비를 입력 : ";
    int width;
    cin >> width; //추출 연산자 -> scanf("%d", &width); 와 같다.

    cout << "높이를 입력 : ";
    int height;
    cin >> height;

    int area = height * width;

    cout << "면적은 " << area << "입니다." << endl;
    
    //문자열을 입력 -> 정통 c방식
    cout << "이름 입력 : ";
    
    char name[11];
    cin >> name;

    cout << "이름은 " << name << "입니다." << endl;
    //문자열 중간에 여백이 들어갈시 여백 앞쪽까지만 문자열에 저장된다.
    // 예를 들자면 '이 종범'이면 '이'만 들어간다.

    //버퍼안에 있는 1바이트 크기의 정보를 무시하시오. (예시상에서는 \n)
    cin.ignore(1);
    cout << "주소를 입력 : ";
    char address[100];
    cin.getline(address, 100, '\n');
    //cin.getline(어디에 저장할지, 저장하는곳 사이즈, 어떤 키가 입력되면 끊을지)
    cout << "주소는 " << address << "입니다. " << endl;

}

