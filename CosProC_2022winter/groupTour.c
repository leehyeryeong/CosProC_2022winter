#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//��ü ���� ���� ���� ������ ���ϴ� �Լ� �����ϱ�
int solution(int arr[], int arr_len, int k) {
	int answer = 0;
	for (int i = 0; i < arr_len; i++) {
		answer += (arr[i] / k);
		if (arr[i] % k) answer++;
	}
	return answer;
}
int main() {

	return 0;
}