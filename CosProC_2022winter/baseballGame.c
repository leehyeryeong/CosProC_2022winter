#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//야구 게임의 볼 판정 함수 수정하기
int* solution(int a, int b) {
	int* result = (int*)malloc(sizeof(int) * 2);
	int temp;
	result[0] = 0;
	result[1] = 0;

	for (int i = 0; i < 3; i++) {
		temp = b;
		for (int k = 0; k < 3; k++) {
			if (a % 10 == temp % 10) {
				if (i == k) result[0]++;
				else result[1]++;
			}
			temp /= 10;
		}
		a /= 10;
	}

	return result;
}
int main() {


	return 0;
}