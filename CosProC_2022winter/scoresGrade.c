#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//학점별 인원수를 구하는 함수의 빈칸 채우기
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

	printf("solution 함수의 반환값은 %d입니다.", res);

	return 0;
}