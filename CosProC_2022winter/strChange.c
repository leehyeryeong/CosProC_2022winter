#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���ڿ� �� Ư�� ���ڸ� �ٲٴ� �Լ� �����ϱ�
char* solution(char* s) {
	char* s_ret = (char*)malloc(sizeof(char) * (strlen(s) + 1));
	strcpy(s_ret, s);

	for (int i = 0; s_ret[i] != 0; i++) {
		if ('0' <= s_ret[i] <= '9') {
			s_ret[i] = 'i' - s_ret[i];
		}
	}
	
	return s_ret;
}
int main() {

	return 0;
}