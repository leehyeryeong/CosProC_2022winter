#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//방문객 수의 차이를 구하는 함수의 빈칸 채우기
int* func_a(int arr[], int arr_size, int num) {
	int* ret = (int*)malloc(sizeof(int) * (arr_size-1));
	int idx = 0;

	for (int i = 0; i < arr_size; i++) {
		if (arr[i] != num) {
			ret[idx++] = arr[i];
		}
	}

	return ret;
}
int func_b(int a, int b) {
	if (a > b) {
		return a - b;
	}
	else {
		return b - a;
	}
}
int func_c(int arr[], int arr_size) {
	int ret = -1;

	for (int i = 0; i < arr_size; i++) {
		if (ret < arr[i]) {
			ret = arr[i];
		}
	}

	return ret;
}
int solution(int visitor[], int n) {
	int max_first = func_c(visitor, n);
	int* visitor_removed = func_a(visitor, n, max_first);
	int max_second = func_c(visitor_removed, n - 1);
	int answer = func_b(max_first, max_second);

	printf("1st max: %d, 2nd max: %d\n", max_first, max_second);

	return answer;
}
int main() {

	return 0;
}