#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//���ڿ����� ó���ϴ� �ð��� ���ϴ� �Լ� �����ϱ�
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