#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//n���� m���� �ڿ����� ���� ���ϴ� �Լ� ��ĭ ä���
int func_a(int k) {
	int sum = 0;

	for (int i = 0; i <= k; ++i) {
		sum += i;
	}

	return sum;
}
int solution(int n, int m) {
	int sum_to_m = func_a(m);
	int sum_to_n = func_a(n - 1);
	int answer = sum_to_m - sum_to_n;

	return answer;
}
int main() {
	int n = 1, m = 100;
	int res = solution(n, m);

	printf("solution�� ��ȯ���� %d�Դϴ�.", res);

	return 0;
}