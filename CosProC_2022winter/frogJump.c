#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//개구리가 점프한 횟수를 구하는 함수의 빈칸 채우기
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

	printf("solution 함수의 반환값은 %d입니다.", res);

	return 0;
}