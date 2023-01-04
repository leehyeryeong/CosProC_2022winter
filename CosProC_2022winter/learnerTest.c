#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//학습 대상자 수를 구하는 함수 고치기
int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++) {
		if (0 <= scores[i] && scores[i] <= 200) {
			count += 1;
		}
	}
	return count;
}
int main() {
	int scores[] = { 100, 300, 90, 50, 400 };
	int scores_len = 5;
	printf("solution 함수의 반환값은 %d입니다.", solution(scores, scores_len));

	return 0;
}