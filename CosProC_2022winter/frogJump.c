#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�������� ������ Ƚ���� ���ϴ� �Լ��� ��ĭ ä���
int solution(int stones[], int stones_len) {
	int cnt = 0;
	int current = 0;

	while (current < stones_len) {
		current += stones[current];
		cnt++;
	}

	return cnt;
}
int main() {
	int stones[6] = { 2, 5, 1, 3, 2, 1 };
	int stones_len = 6;
	int res = solution(stones, stones_len);

	printf("solution �Լ��� ��ȯ���� %d�Դϴ�.", res);

	return 0;
}