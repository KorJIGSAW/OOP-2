#include <stdio.h>
//�迭-���� ���� �ڷῡ ���� �������� ���������� �����.
//C���� �迭�� �̸��� �� �迭�� ���� �ּ� -> array[0]�� �ּ�(��� const)
//array == &array[0]
int main() {
	int array[5] = {10,20}; // ����(�޸𸮿�û)+�ʱ�ȭ

	for (int i = 0; i < 5; i++) {
		printf("%3d", array[i]); 
	}
	printf("\n--------------\n");
	for (int i = 0; i < 5; i++) {
		printf("%u, %u\n", &array[i], array+i); //�ּҸ� ���
		//&u -> unsigned = ��ȣ���� ���밪���� ǥ��
		//c������ array = &array[0] �̸鼭 array+1 = &array[1]�̴�. 
		//c���� ȥ�� �˾Ƽ� �����ؼ� �����ش�. �߱���صξ����.
	}
	for (int i = 0; i < 5; i++) {
		printf("%p", &array[i]);
		//&p -> 16������ ���
	}

	//�迭�� ������ ����( != �迭������)
	//�����ͺ����� ����
	int n = 10;
	int* ptr = &n; // �����Ͷ�� ���𿡼��� ��

	printf("%u, %u\n", &n, ptr); // �ּ� ���
	printf("%d, %d\n", n, *ptr); // �� ��� ->*�� ptr�ΰ���� �� �� ���� ������� �ƿ� �ٸ�����. �����Ϳ��� ���� ���� �򰥷��ϴ� ����


	
	for (int i = 0; i < 5; i++) {
		printf("%d, %d\n", array[i], *(array+i)); //�� ���
	}
	printf("%d, %d\n", array[0], *array);

	//������ �迭 != �迭 ������ ����
	int* pt = array; 
	array& array[0]
	for (int i = 0; i < 5; i++) {
		printf("%u, %u\n", array + i, pt + i);
	}
	

	for (int i = 0; i < 5; i++) {
		printf("%u, %u\n", array, pt);
		//array++ ->  ����, ������ �����.
	}
	printf("%d\n", *pt); //����, �����Ⱚ�� ��µȴ�.
	
}

