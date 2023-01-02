#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//티셔츠 주문 수량 구하는 함수 완성하기
int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer;
	answer = (int*)malloc(sizeof(int) * shirt_size_len);

	//초기화
	for (int i = 0; i < shirt_size_len; i++) {
		answer[i] = 0;
	}
	//사이즈 비교해서 수량 세기
	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "XS") == 0) {
			answer[0]++;
		}
		else if (strcmp(shirt_size[i], "S") == 0) {
			answer[1]++;
		}
		else if (strcmp(shirt_size[i], "M") == 0) {
			answer[2]++;
		}
		else if (strcmp(shirt_size[i], "L") == 0) {
			answer[3]++;
		}
		else if (strcmp(shirt_size[i], "XL") == 0) {
			answer[4]++;
		}
		else {
			answer[5]++;
		}
	}

	return answer;
}
int main() {
	char* shirt_size[5] = { "XS", "S", "L", "XL", "L" };
	int shirt_size_len = 5;

	int *res = solution(shirt_size, shirt_size_len);

	for (int i = 0; i < shirt_size_len; i++) {
		printf("%d ", res[i]);
	}

	return 0;
}