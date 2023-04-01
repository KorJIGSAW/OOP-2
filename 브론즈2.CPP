#include <iostream>
using namespace std;

int check(int count, int N) {
	int i;
	for (i = 1; i < 9; i++) {
		if (count > N) {
			break;
		}
		count *= i;
	}
	return count;
}

int main() {
	int N; //물병의 갯수
	int K; //만들어야할 물병의 갯수
	int count = 2;

	cin >> N >> K;


	int water[107];
	//배열 초기화
	for (int i = 0; i < size(water); i++) {
		water[i] = 1;
	}
	//2^n일시 뺄것
	int res = check(count ,N);
	N -= res;

	 

}