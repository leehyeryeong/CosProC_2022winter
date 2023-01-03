#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//수강 대상자 수를 구하는 함수 고치기
int solution(int scores[], int scores_len) {
	int count = 0;

	for (int i = 0; i < scores_len; i++) {
		if (650 <= scores[i] && scores[i] < 800) {
			count++;
		}
	}

	return count;
}
int main() {
	int scores[6] = { 500, 800, 650, 790, 750, 660 };
	int scores_len = 6;
	printf("solution 함수의 실행 결과는 %d입니다.", solution(scores, scores_len));

	return 0;
}