#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//축구화 주문 수량 구하는 함수 완성하기
int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer = (int*)malloc(sizeof(int)*shirt_size_len);
	
	for (int i = 0; i < shirt_size_len; i++) answer[i] = 0;
	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "7") == 0) {
			answer[0]++;
		}
		else if (strcmp(shirt_size[i], "7.5") == 0) {
			answer[1]++;
		}
		else if (strcmp(shirt_size[i], "8") == 0) {
			answer[2]++;
		}
		else if (strcmp(shirt_size[i], "8.5") == 0) {
			answer[3]++;
		}
		else if (strcmp(shirt_size[i], "9") == 0) {
			answer[4]++;
		}
		else if (strcmp(shirt_size[i], "9.5") == 0) {
			answer[5]++;
		}
	}

	return answer;
}
int main() {
	char *shirt_size[]= {"7", "9", "7", "8.5", "7.5"};
	int shirt_size_len = sizeof(shirt_size) / sizeof(shirt_size[0]);
	int* res = solution(shirt_size, shirt_size_len);

	for (int i = 0; i < shirt_size_len; i++) {
		printf("%d ", res[i]);
	}

	return 0;
}