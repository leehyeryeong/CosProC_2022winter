#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//n부터 m까지 자연수의 합을 구하는 함수 수정하기
int func_a(int k) {
	int sum = 0;
	for (int i = 0; i <= k; ++i) {
		sum += i;
	}
	return sum;
}
int solution(int n, int m) {
	int sum_to_m = func_a(m);
	int sum_to_n = func_b(n);
	int answer = sum_to_m + sum_to_n;

	return answer;
}
int main() {
	
	return 0;
}