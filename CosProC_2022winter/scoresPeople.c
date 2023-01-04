#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(int scores[], int scores_len) {
	int* grade_counter = (int*)malloc(sizeof(int)*1001);

	for (int i = 0; i < 1001; i++) {
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

	return 0;
}