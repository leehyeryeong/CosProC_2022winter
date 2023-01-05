#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//������ ��û�� �ο��� ���ϴ� �Լ� �����ϱ�
int* solution(int arr[], int arr_len) {
	int* answer = (int*)malloc(sizeof(int) * 3);

	for (int i = 0; i < 3; i++) {
		answer[i] = 0;
		for (int k = 0; k < 4; k++) {
			answer[i] += arr[i * 4 + k];
		}
	}

	return answer;
}
int main() {
	int arr1[] = { 8, 5, 3, 5, 6, 7, 3, 4, 5, 6, 7, 8 };
	int* result = solution(arr1, 12);
	printf("%d %d %d\n", result[0], result[1], result[2]);

	return 0;
}