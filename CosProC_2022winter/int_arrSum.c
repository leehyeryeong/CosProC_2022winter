#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//���ڿ� �� �������� ���� ���ϴ� �Լ� ��ĭ ä���
int solution(char string[]) {
	int answer = 0;
	int number = 0;
	
	for (int i = 0; string[i] != 0; i++) {
		if ('0' <= string[i] && string[i] <= '9') {
			number = number * 10 + (string[i] - 48);
		}
		else {
			answer += number;
			number = 0;
		}
	}

	return answer;
}
int main() {
	char str[] = "korea 20/18 10. 11. pm 1.";
	int res = solution(str);
	printf("%d \n", res);

	return 0;
}