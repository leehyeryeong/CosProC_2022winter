#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(int len) {						
	int* arr = (int*)malloc(sizeof(int) * len);	//len개의 저장 공간을 생성한다.
	for (int i = 0; i < 10; ++i) {
		//result[i] = i + 100;
		arr[i] = i + 100;
	}
	return arr;									//동적할당된 배열의 시작 주소를 반환한다.
}
int main() {
	int* result;
	result = solution(10);						//배열의 시작 주소를 반환 받는다.
	for (int i = 0; i < 10; ++i) {				//반환 받은 배열의 길이를 알고 있다.
		printf("%d ", result[i]);
	}

	return 0;
}