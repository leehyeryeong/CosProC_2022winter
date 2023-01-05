#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//예산을 배분하기 위한 금액을 구하는 함수 빈칸 채우기
int func_a(int arr[], int len) {
	int total = 0;

	for (int i = 0; i < len; i++) {
		total += arr[i];
	}

	return total;
}
int* solution(int total, int arr[], int arr_len) {
	int* result = (int*)malloc(sizeof(int) * arr_len);
	int req_total = func_a(arr, arr_len);

	if (req_total > total) {
		for (int i = 0; i < arr_len; i++) {
			result[i] = total / arr_len;
		}
	}
	else {
		for (int i = 0; i < arr_len; i++) {
			result[i] = arr[i];
		}
	}

	return result;
}
int main() {
	int arr[] = { 200, 110, 140, 150 };
	int arr_len = 4;
	int res = solution(500, arr, arr_len);

	printf("solution 함수의 반환값은 %d입니다.", res);

	return 0;
}