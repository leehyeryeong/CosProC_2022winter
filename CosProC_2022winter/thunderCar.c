#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int solution(int arr[], int N) {
	int answer = 0;
	int energy = 40;

	for (int i = 0; i < N; i++) {
		if (energy < arr[i]) {
			printf("������: %d, %d �Ÿ� �̵� �Ұ� ���� ���\n", energy, arr[i]);
			energy = 40;
			answer += 1;
		}
		energy -= arr[i];
	}

	return answer;
}
int main() {
	int arr[] = { 20, 10, 30, 30 };
	int ret = solution(arr, sizeof(arr) / sizeof(arr[0]));

	printf("%d \n", ret);

	return 0;
}