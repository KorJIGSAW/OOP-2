//구조체 - 다른 데이터 타입까지도 자료모임으로 연속적으로 저장된다.
//배열은 구성 요소를 인덱스로 구분하지만 접근, 구조체는 이름으로 접근한다.
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
//구조체 정의
struct person {
	char name[10];
	int age;
	double gpa;
};

int main() {
	//구조체 변수 선언
	struct person stu;
	stu.age = 20;
	stu.gpa = 4.5;
	//stu.name = "KIM";
	strcpy(stu.name, "KIM");
	//strcpy_s(stu.name, "KIM", 10);
	//define _CRT_NO_WARNINGS 기입안한경우 _s 쓸때 마지막 인수로 사이즈 기입하기
	
	printf("%s %d %lf\n", stu.name, stu.age, stu.gpa);
}