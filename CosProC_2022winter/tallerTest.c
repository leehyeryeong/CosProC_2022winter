#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Ű�� ū ����� ���� ���ϴ� �Լ� �����ϱ�
int solution(int height[], int height_len, int k) {
	int answer = 0;

	for (int i = 0; i < height_len; i++) {
		if (height[i] > k) {
			answer++;
		}
	}

	return answer;
}
int main() {
	int height[] = { 165, 170, 175, 180, 184 };
	int height_len = 5;
	int res = solution(height, height_len, 175);

	printf("solution �Լ��� ��ȯ���� %d�Դϴ�.", res);

	return 0;
}