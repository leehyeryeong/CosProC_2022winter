#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//���Ը� ��� ���� �ʿ��� ���� ���� ���ϴ� �Լ� ��ĭ ä���
int solution(int arr[], int arr_len, int payload) {
	int cnt = 0;
	int weight = 0;
	int diff = 0;

	for (int i = arr_len - 1; i >= 0; i--) {
		diff = payload - weight;
		if (diff >= arr[i]) {
			weight += arr[i];
			cnt++;
		}
	}
	if (weight != payload) {
		cnt = 0;
	}

	return cnt;
}
int main() {
	int arr[] = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 };
	
	for (int i = 10; i <= 100; i += 10) {
		int result = solution(arr, sizeof(arr) / sizeof(arr[0]), i);
		printf("%d - %d \n", result);
	}

	return 0;
}