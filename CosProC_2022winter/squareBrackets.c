#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//���ȣ �� ���� ���� �Լ� ��ĭ ä���
int func_a(char s[]) {
	int cnt = 0;

	for (int i = 0; s[i] != 0; i++) {
		if (s[i] == '[') cnt++;
		if (s[i] == ']') cnt--;
	}

	return cnt;
}
int solution(char string[]) {
	int answer = 0;

	if (func_a(string)) return -1;
	for (int i = 0; i < strlen(string); i++) {
		if (string[i] == ']') {
			answer++;
		}
	}

	return answer;
}
int main() {
	char string = "kim [10, 20, 30] jung [30, 20]";

	return 0;
}