//����ü - �ٸ� ������ Ÿ�Ա����� �ڷ�������� ���������� ����ȴ�.
//�迭�� ���� ��Ҹ� �ε����� ���������� ����, ����ü�� �̸����� �����Ѵ�.
#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
//����ü ����
struct person {
	char name[10];
	int age;
	double gpa;
};

int main() {
	//����ü ���� ����
	struct person stu;
	stu.age = 20;
	stu.gpa = 4.5;
	//stu.name = "KIM";
	strcpy(stu.name, "KIM");
	//strcpy_s(stu.name, "KIM", 10);
	//define _CRT_NO_WARNINGS ���Ծ��Ѱ�� _s ���� ������ �μ��� ������ �����ϱ�
	
	printf("%s %d %lf\n", stu.name, stu.age, stu.gpa);
}