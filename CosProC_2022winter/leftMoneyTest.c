#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�Ž������� ����ϴ� �Լ� �ۼ��ϱ�
int solution(int price[], int price_len, int money) {
	int answer = 0;
	int sum = 0;

	for (int i = 0; i < price_len; i++) {
		sum += price[i];
	}
	answer = money - sum;

	if (answer < 0) {
		return -1;
	}

	return answer;
}
int main() {
	int price[] = { 2100, 3200, 2100, 800 };
	int price_len = 4;

	printf("solution �Լ��� ��ȯ���� %d�Դϴ�.", solution(price, price_len, 5000));

	return 0;
}