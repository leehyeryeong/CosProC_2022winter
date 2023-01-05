#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//단체 여행 숙소 방의 개수를 구하는 함수 수정하기
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