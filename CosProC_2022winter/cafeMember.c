#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ºóµµ(ÃâÇö È½¼ö)¸¦ ±¸ÇÏ´Â ÇÔ¼öÀÇ ºóÄ­ Ã¤¿ì±â
int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int) * 1001);
	for (int i = 0; i < 1001; i++) {
		counter[i] = 0;
	}
	for (int i = 0; i < arr_len; i++) {
		counter[arr[i]]++;
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
	int ret = 1001;
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] != 0 && ret > arr[i]) {
			ret = arr[i];
		}
	}
	return ret;
}
int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, 1001);
	int min_cnt = func_c(counter, 1001);
	return max_cnt / min_cnt;
}
int main() {
	int arr[] = { 100, 200, 300, 400, 500, 300, 10, 700 };
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	int res = solution(arr, arr_len);

	printf("%d \n", res);

	return 0;
}