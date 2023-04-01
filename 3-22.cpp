#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 5
//���� ����ü ����
typedef int element;
typedef struct{
	element data[MAX_STACK_SIZE];
	int top; //�������������� -> data[5] �Ҵ�ǰ� top�� �ٷ� ���� �Ҵ��. (��, �����)
}StackType;

void init_stack(StackType *s) {
	s->top = -1;//s�� �ּڰ��� �޾����� .���� ������ �ƴ� ȭ��ǥ�� �����ؾ��Ѵ�.
}

int is_full(StackType* s) {
	return s->top == MAX_STACK_SIZE - 1;
}

int is_empty(StackType* s) {
	//underflow check!
	return s->top == -1;
}

void push(StackType *s, element r){
	//overflow check!
	if (is_full(s)){
		printf("Stack Overflow!!\n");
		exit(1); //stdlib.h
	}
	else {
							  //s�� �ּڰ��� �޾����� .���� ������ �ƴ� ȭ��ǥ�� �����ؾ��Ѵ�.
		s->data[++s->top] = r;//s�� ����Ű�� data �迭�� s�� ����Ű�� top�� �ε��� ���� �޾ƿ� r���� �ִ´�.
							  //������ �� �ڵ�� �ҿ����� �ڵ�. ������ ĸ��ȭ�� ������ ���� c++����̴�.
	}
}

element pop(StackType* s) {
	if (is_empty(s)) {
		printf("Stack UnderFlow!!\n");
	}
	else {
		return s->data[s->top--];
	}
}

void main() {
	StackType s;

	init_stack(&s);

	push(&s, 1); push(&s, 2); push(&s, 3); push(&s, 4); push(&s, 5);

	//���ð� ���
	for (int i = 0; i <= s.top; i++) {
		printf("%3d", s.data[i]);
	}
	printf("\n");

	element item = pop(&s);
	printf("POP VALUE = %3d", item);
	printf("\n");

	//POP�ϰ� �� ���� data�迭 ���
	for (int i = 0; i <= s.top; i++) {
		printf("%3d", s.data[i]);
	}
	printf("\n");
}