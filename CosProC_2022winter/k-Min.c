#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//k번째로 작은 수를 찾는 함수 작성하기
int solution(int arr[][4], int n, int k) {
	int answer = 0;
	int min = 0;

	for (int i = 1; i <= k; i++) {
		min = func_a(arr, n);
		func_b(arr, n, min);
	}
	answer = min;

	return answer;
}
int func_a(int a[][4], int n) {
	int min = 1001;

	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (min > a[r][c]) {
				min = a[r][c];
			}
		}
	}

	return min;
}
int func_b(int a[][4], int n, int del) {
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < 4; ++c) {
			if (del == a[r][c]) {
				a[r][c] = 1001;
				return 1;
			}
		}
	}

	return 0;
}
int main() {
	int arr[4][4] = { {5, 12, 4, 31},
					 {24, 13, 11, 2},
					 {43, 44, 19, 26},
					 {33, 65, 20, 21} };
	printf("solution 함수의 반환값은 %d입니다.", solution(arr, 4, 4));

	return 0;
}