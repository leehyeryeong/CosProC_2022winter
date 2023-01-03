#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�󵵸� ���ϴ� �Լ��� �� ĭ ä���
int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_cnt = func_b(counter, 1001);
	int min_cnt = func_c(counter, 1001);

	return max_cnt / min_cnt;
}
int* func_a(int arr[], int arr_len) {
	int* counter = (int*)malloc(sizeof(int) * 1001);
	//���� �迭 counter ����
	for (int i = 0; i < 1001; i++) {
		counter[i] = 0; //�迭 �ʱ�ȭ
	}
	for (int i = 0; i < arr_len; i++) {
		counter[arr[i]]++; //���޹��� �迭 �� �ڿ����� ������ ����
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
	const int INF = 1001; //�� �ǹ� ���� �ڵ�
	int ret = INF; //INF ��� 1001�� ��� �Ǹ� �ڿ��� �ִ밪
	for (int i = 0; i < arr_len; i++) {
		if (arr[i] != 0 && ret > arr[i]) {
			//arr[i]�� 0�� ���� �󵵰� 0�̹Ƿ� �ش� ���ڴ� ���ܽ�Ų��.
			ret = arr[i];
		}
	}
}
int main() {
	int arr[9] = {2, 3, 3, 1, 3, 3, 2, 3, 2};
	int arr_len = 9;

	int res = solution(arr, arr_len);
	printf("solution�� ��ȯ ���� %d�Դϴ�.", res);

	return 0;
}