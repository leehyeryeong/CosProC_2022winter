#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//문자열들을 처리하는 시간을 구하는 함수 수정하기
int solution(const char* strings[], int str_len) {
	int result = 0;
	int len;
	for (int i = 0; i < str_len; i++) {
		len = strlen(strings[i])++;
		result += (len / 4);
		if (len % 4 != 0) {
			result++;
		}
	}
	return result;
}
int main() {

	return 0;
}