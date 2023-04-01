#include <iostream>
#include "Circle.h"
using namespace std;

int main() {
	int k, n;
	int count = 0;
	//동적 할당 - 실행중에 할당된다. (늦은 할당)
	//힙이라는 메모리에 할당한다.
	cout << "생성할 객체의 수를 입력 : ";
	cin >> k;
	Circle *pArray = new Circle[k]; //Circle 자료형의 변수 pArray를 포인터 변수로 선언하고 동적할당한다. 기본생성자가 호출된다.
	for (int i = 0; i < k; i++) {
		cout << "원" << i+1 << " : ";
		cin >> n;
		pArray[i].SetRadius(n);
		//원의 면적이 100보다 크고 200보다 작은 객체의 수를 카운팅
		if (pArray[i].getArea() > 100 && pArray[i].getArea() < 200) {
			count++;
		}
		cout << "pArray[" << i << "]의 값은 : " << pArray[i].getArea() << endl;
	}
	
	cout << "원의 면적이 100보다 크고 200보다 작은 객체는 총 : " << count << "개 이다." << endl;
	
	Circle *p = pArray; //주소를 받아야하므로 변수p도 포인터 변수이다.
	for (int i = 0; i < k; i++) {
		cout << "pArray[" << i << "]의 값은 : " << p->getArea() << endl;
		p++;
	}
	delete[] pArray; //배열을 소멸자로 호출해야하므로 delete[]가 된다.
}