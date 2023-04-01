#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 5
//스택 구조체 정의
typedef int element;
typedef struct{
	element data[MAX_STACK_SIZE];
	int top; //연속적으로저장 -> data[5] 할당되고 top이 바로 옆에 할당됨. (단, 선언시)
}StackType;

void init_stack(StackType *s) {
	s->top = -1;//s의 주솟값을 받았으니 .으로 접근이 아닌 화살표로 접근해야한다.
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
							  //s의 주솟값을 받았으니 .으로 접근이 아닌 화살표로 접근해야한다.
		s->data[++s->top] = r;//s가 가리키는 data 배열의 s가 가리키는 top의 인덱스 값에 받아온 r값을 넣는다.
							  //하지만 이 코드는 불완전한 코드. 이점을 캡슐화로 보완한 것이 c++언어이다.
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

	//스택값 출력
	for (int i = 0; i <= s.top; i++) {
		printf("%3d", s.data[i]);
	}
	printf("\n");

	element item = pop(&s);
	printf("POP VALUE = %3d", item);
	printf("\n");

	//POP하고 난 뒤의 data배열 출력
	for (int i = 0; i <= s.top; i++) {
		printf("%3d", s.data[i]);
	}
	printf("\n");
}