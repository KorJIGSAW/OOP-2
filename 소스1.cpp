#include <stdio.h>
//배열-같은 형의 자료에 대한 모임으로 연속적으로 저장됨.
//C언어에서 배열의 이름은 그 배열의 시작 주소 -> array[0]의 주소(상수 const)
//array == &array[0]
int main() {
	int array[5] = {10,20}; // 선언(메모리요청)+초기화

	for (int i = 0; i < 5; i++) {
		printf("%3d", array[i]); 
	}
	printf("\n--------------\n");
	for (int i = 0; i < 5; i++) {
		printf("%u, %u\n", &array[i], array+i); //주소를 출력
		//&u -> unsigned = 부호없이 절대값으로 표현
		//c언어에서는 array = &array[0] 이면서 array+1 = &array[1]이다. 
		//c언어는 혼자 알아서 연산해서 더해준다. 잘기억해두어야함.
	}
	for (int i = 0; i < 5; i++) {
		printf("%p", &array[i]);
		//&p -> 16진수로 출력
	}

	//배열과 포인터 변수( != 배열포인터)
	//포인터변수를 선언
	int n = 10;
	int* ptr = &n; // 포인터라는 선언에서의 별

	printf("%u, %u\n", &n, ptr); // 주소 출력
	printf("%d, %d\n", n, *ptr); // 값 출력 ->*은 ptr로가라는 뜻 위 변수 선언과는 아예 다른뜻임. 포인터에서 가장 많이 헷갈려하는 내용


	
	for (int i = 0; i < 5; i++) {
		printf("%d, %d\n", array[i], *(array+i)); //값 출력
	}
	printf("%d, %d\n", array[0], *array);

	//포인터 배열 != 배열 포인터 변수
	int* pt = array; 
	array& array[0]
	for (int i = 0; i < 5; i++) {
		printf("%u, %u\n", array + i, pt + i);
	}
	

	for (int i = 0; i < 5; i++) {
		printf("%u, %u\n", array, pt);
		//array++ ->  오류, 포인터 상수임.
	}
	printf("%d\n", *pt); //오류, 쓰레기값이 출력된다.
	
}

