#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//ī�� ���� �����Ͽ� Ȧ���� ������ ���ϴ� �Լ� ��ĭ ä���
int solution(int cards[]) {
	int answer = 0;
	for (int i = 0; i < 3; i++) {
		for (int k = i + 1; k < 5; k++) {
			for (int m = k + 1; m < 5; m++) {
				if ((cards[i] + cards[k] + cards[m]) % 2) {
					answer++;
				}
			}
		}
	}
	return answer;
}
int main() {
	int cards[5] = { 7, 5, 6, 4, 9 };
	int result = solution(cards);
	printf("%d \n", result);
	
	return 0;
}