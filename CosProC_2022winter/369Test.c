#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//������ 3, 6, 9�� ���ԵǾ� �ִ��� Ȯ���ϴ� �Լ��� ��ĭ ä���
int solution(int number) {
	int count = 0;

	for (int i = 1; i <= number; i++) {
		int current = i;
		while (current != 0) {
			if (current%10==3||current%10==6||current%10==9) {
				count++;
				printf("¦");
			}
			current /= 10;
		} //end of while
	} //end of for

	return count;
}
int main() {
	solution(60);

	return 0;
}