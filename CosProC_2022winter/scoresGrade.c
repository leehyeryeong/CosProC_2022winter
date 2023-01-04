#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//������ �ο����� ���ϴ� �Լ��� ��ĭ ä���
int* solution(int scores[], int scores_len) {
	int* grade_counter = (int*)malloc(sizeof(int) * 5);

	for (int i = 0; i < 5; i++) {
		grade_counter[i] = 0;
	}

	for (int i = 0; i < scores_len; i++) {
		if (scores[i] >= 85) {
			grade_counter[0] += 1;
		}
		else if (scores[i] >= 70) {
			grade_counter[1] += 1;
		}
		else if (scores[i] >= 55) {
			grade_counter[2] += 1;
		}
		else if (scores[i] >= 40) {
			grade_counter[3] += 1;
		}
		else {
			grade_counter[4] += 1;
		}
	}

	return grade_counter;
}
int main() {
	int scores[5] = { 100, 70, 50, 30, 90 };
	int scores_len = 5;
	int res = solution(scores, scores_len);

	printf("solution �Լ��� ��ȯ���� %d�Դϴ�.", res);

	return 0;
}