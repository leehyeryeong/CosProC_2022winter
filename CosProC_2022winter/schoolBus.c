#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//���й��� �պ� Ƚ�� ���ϴ� �Լ� �ۼ��ϱ�
int solution(int student[], int apts) {
	int result = 0;
	int total = 0;

	for (int i = 0; i < apts; i++) {
		total += student[i];
	}
	result = (total / 12);
	if (total % 12) result++;

	return result;
}
int main() {
	int student[] = { 12, 3, 4, 4, 12, 8, 9 };
	int res = solution(student, sizeof(student) / sizeof(student[0]));
	printf("%d \n", res);

	return 0;
}