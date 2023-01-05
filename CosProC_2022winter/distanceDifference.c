#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//이동 거리 차이를 구하는 함수 빈칸 채우기
double solution(int a, int b) {
	double answer = 0;
	int diff = (a<b)?b-a:a-b;
	answer = 10.0 / diff;

	return answer * 60;
}
int main() {
	int a = 10;
	int b = 13;
	int res = solution(a, b);

	printf("solution 함수의 반환값은 %d입니다.", res);

	return 0;
}