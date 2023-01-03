#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//상품 구매 금액을 구하는 함수 완성하기
int solution(int price, char* grade) {
	int answer = 0;

	for (int i = 0; i < strlen(grade); i++) {
		if (strcmp(grade, "V") == 0) {
			price -= price * 0.15;
		}
		else if (strcmp(grade, "G") == 0) {
			price -= price * 0.1;
		}
		else if(strcmp(grade, "S")==0) {
			price -= price * 0.05;
		}
	}

	answer = price;

	return answer;
}
int main() {
	int res = solution(10000, "S");
	printf("solution 함수의 출력 값은 %d입니다.", res);

	return 0;
}