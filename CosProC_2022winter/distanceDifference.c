#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�̵� �Ÿ� ���̸� ���ϴ� �Լ� ��ĭ ä���
double solution(int a, int b) {
	double answer = 0;
	int diff = (a<b)?b-a:a-b;
	answer = 10.0 / diff;

	return answer * 60;
}
int main() {
	int a = 10;
	int b = 13;
	int res = solution(a, b);

	printf("solution �Լ��� ��ȯ���� %d�Դϴ�.", res);

	return 0;
}