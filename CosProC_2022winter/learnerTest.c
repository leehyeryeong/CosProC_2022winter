#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�н� ����� ���� ���ϴ� �Լ� ��ġ��
int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++) {
		if (0 <= scores[i] && scores[i] <= 200) {
			count += 1;
		}
	}
	return count;
}
int main() {
	int scores[] = { 100, 300, 90, 50, 400 };
	int scores_len = 5;
	printf("solution �Լ��� ��ȯ���� %d�Դϴ�.", solution(scores, scores_len));

	return 0;
}