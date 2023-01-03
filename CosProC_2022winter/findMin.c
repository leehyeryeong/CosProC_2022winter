#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//특정값보다 작은 값을 찾는 함수 수정하기
int solution(int data[], int data_len) {
	double total = 0;

	for (int i = 0; i < data_len; i++) {
		total += data[i];
	}

	int cnt = 0;
	double average = total / data_len;
	for (int i = 0; i < data_len; i++) {
		if (data[i] <= average) {
			cnt += 1;
		}
	}

	return cnt;
}
int main() {

	return 0;
}