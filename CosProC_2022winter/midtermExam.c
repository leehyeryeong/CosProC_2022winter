#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//중간고사 폐지를 위한 설문조사 결과를 구하는 함수 작성하기
int* solution(int a[][3], int b[][3], int len) {
	int* answer = (int*)malloc(sizeof(int)*2);
	int total = 0;
	int p_sum = 0;
	int n_sum = 0;

	for (int i = 0; i < len; i++) {
		for (int k = 0; k < 3; k++) {
			total += a[i][k] + b[i][k];
			p_sum += a[i][k];
			n_sum += b[i][k];
		}
	}

	answer[0] = (int)((double)p_sum / total * 100);
	answer[1] = (int)((double)n_sum / total * 100);

	return answer;
}
int main() {
	int po[4][3] = { 3, 2, 7, 4, 2, 6, 5, 3, 8, 7, 6, 8 };
	int na[4][3] = { 30, 50, 120, 7, 9, 1, 1, 1, 2, 2, 2, 4 };
	int* res = solution(po, na, sizeof(po) / sizeof(po[0]));

	printf("%d %d \n", res[0], res[1]);

	return 0;
}