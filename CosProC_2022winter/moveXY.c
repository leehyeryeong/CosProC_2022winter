#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//ȭ�� �� �̵� �� x�� y�� ���� ��ġ ���� ���ϴ� �Լ� �����ϱ�
int solution(char input[], int arr_len) {
	int answer = 0;
	int x, y;
	x = y = 0;

	for (int i = 0; i < arr_len; i++) {
		if (input[i] == 'w') y--;
		else if (input[i] == 's') y++;
		else if (input[i] == 'a') x--;
		else if (input[i] == 'd') x++;
		if (x == y) {
			answer++;
		}
	}

	return answer;
}
int main() {
	char* arr2 = "waawsddsassadw3wd";
	int res = solution(arr2, strlen(arr2));

	printf("���: %d \n", res);
	
	return 0;
}