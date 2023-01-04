#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//������ ���տ��� �ְ� ������ ���� ������ �����ϴ� �Լ��� ��ĭ ä���
int solution(int scores[], int scores_len) {
	int sum = func_b(scores, scores_len);
	int max_score = func_c(scores, scores_len);
	int min_score = func_a(scores, scores_len);

	return sum - max_score - min_score;
}
int func_a(int s[], int arr_size) {
	int ret = 0;

	for (int i = 0; i < arr_size; ++i) {
		if (s[i] > ret) {
			ret = s[i];
		}
	}

	return ret;
}
int func_b(int s[], int arr_size) {
	int ret = 0;

	for (int i = 0; i < arr_size; ++i) {
		ret += s[i];
	}

	return ret;
}
int func_c(int s[], int arr_size) {
	int ret = 101;

	for (int i = 0; i < arr_size; ++i) {
		if (s[i] < ret) {
			ret = s[i];
		}
	}

	return ret;
}
int main() {
	int scores[4] = { 50, 90, 65, 100 };
	int scores_len = 4;
	int res = solution(scores, scores_len);

	printf("solution �Լ��� ��ȯ���� %d�Դϴ�.", res);

	return 0;
}