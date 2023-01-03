#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//빈도를 구하는 함수의 빈 칸 채우기
int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, 1001);
	int min_cnt = func_c(counter, 1001);

	return max_cnt / min_cnt;
}
int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int) * 1001);
	//동적 배열 counter 생성
	for (int i = 0; i < 1001; i++) {
		counter[i] = 0; //배열 초기화
	}
	for (int i = 0; i < arr_len; i++) {
		counter[arr[i]]++; //전달받은 배열 속 자연수의 개수를 저장
	}
	return counter;
}
int func_b(int arr[], int arr_len) {
	int ret = 0;
	for (int i = 0; i < arr_len; i++) {
		if (ret < arr[i]) {
			ret = arr[i];
		}
	}
	return ret;
}
int func_c(int arr[], int arr_len) {
	const int INF = 1001; //별 의미 없는 코드
	int ret = INF; //INF 대신 1001로 적어도 되며 자연수 최대값
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] != 0 && ret > arr[i]) {
			//arr[i]이 0인 경우는 빈도가 0이므로 해당 숫자는 제외시킨다.
			ret = arr[i];
		}
	}
}
int main() {
	int arr[9] = {2, 3, 3, 1, 3, 3, 2, 3, 2};
	int arr_len = 9;

	int res = solution(arr, arr_len);
	printf("solution의 반환 값은 %d입니다.", res);

	return 0;
}