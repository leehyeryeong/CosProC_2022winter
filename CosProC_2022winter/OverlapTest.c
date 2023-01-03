#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//중복되는 문자를 제거하는 함수 수정하기
char* solution(char* characters) {
	char* result = malloc(sizeof(char) * strlen(characters));
	int result_len = 0;
	result[0] = characters[0];
	result_len++;
	for (int i = 1; i < strlen(characters); i++) {
		if (characters[i - 1] != characters[i]) {
			result[result_len] = characters[i];
			result_len++;
		}
	}
	result[result_len] = NULL;
	return result;
}
int main() {
	char characters = "senteeeencccccceeee";
	int res = solution(characters);

	printf("%d", res);

	return 0;
}