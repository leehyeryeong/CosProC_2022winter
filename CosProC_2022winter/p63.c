#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(int p[]) {
	printf("p의 크기 %d\n", sizeof(p));					//p는 포인터변수다.

	return 0;
}
int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr의 크기 %d\n", sizeof(arr));
	solution(arr);										//배열의 시작 주소를 전달하는 것
	//기종에 따라, 컴파일러에 따라 p의 크기의 값이 다르게 나올 수 있다.

	return 0;
}