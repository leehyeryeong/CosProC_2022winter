#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//평균과 가장 큰 차이가 나는 점수 구하는 함수 수정하기
int func_a(int a[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++) total += a[i];
	
	return total;
}
int func_b(int a, int b) {
	return (a > b) ? b - a : a - b;
}
int func_c(int a, int b[], int n) {
	int diff;
	int max_diff = 0;
	int max_score = 0;

	for (int i = 0; i < n; i++) {
		diff = func_b(a, b[i]);
		if (max_diff < diff) {
			max_diff = diff;
			max_score = b[i];
		}
	}

	return max_score;
}
int solution(int scores[], int scores_len) {
	int answer = 0;
	int total = func_a(scores, scores_len);
	int avg = total / scores_len;
	int max_score = func_c(avg, scores, scores_len);
	answer = max_score;

	return answer;
}
int main() {

	return 0;
}