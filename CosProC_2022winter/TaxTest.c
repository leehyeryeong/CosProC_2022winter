#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//관세를 매긴 금액을 구하는 함수 완성하기
int solution(int price, char* grade) {
	int answer = 0;
	
	if (strcmp(grade, "V") == 0) {
		price += price * 0.15;
	}
	else if (strcmp(grade, "G") == 0) {
		price += price * 0.1;
	}
	else if (strcmp(grade, "S") == 0) {
		price += price * 0.05;
	}
	answer = price;

	return answer;
}
int main() {
	int price = 10000;
	char grade = "G";
	int res = solution(price, grade);

	printf("solution 함수의 반환값은 %d입니다.", res);

	return 0;
}