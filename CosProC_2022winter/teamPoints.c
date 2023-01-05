#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//각 팀의 총 승점을 구하는 함수 수정하기
int* solution(int scores[][4], int scores_len) {
	int* result = (int*)malloc(sizeof(int) * scores_len);

	for (int i = 0; i < 4; i++) {
		result[i] = 0;
		for (int k = 0; k < 4; k++) {
			if (i != k) {
				result[i] += scores[i][k];
			}
		}
	}

	return result;
}
int main() {
	int scores[4][4] = {
		{-1, 1, 0, 0},
		{0, -1, 0, 1},
		{1, 1, -1, 1},
		{1, 0, 0, -1}
	};
	int* result = solution(scores, 4);
	for (int i = 0; i < 4; i++) {
		printf("[%d] ", result[i]);
	}
	printf("\n");

	return 0;
}