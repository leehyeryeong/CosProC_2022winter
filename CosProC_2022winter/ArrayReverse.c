#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//배열 요소들의 순서를 뒤집는 함수의 빈칸 채우기
int* solution(int arr[], int arr_len) {
	int left = 0; //교환할 왼쪽 요소의 시작 번호
	int right = arr_len - 1; //교환할 오른쪽 요소의 시작 번호(마지막 요소)
	while (left < right) {
		int temp = arr[left]; //두 요소의 값을 교환
		arr[left] = arr[right];
		arr[right] = temp;
		left += 1; //왼쪽(0번 요소쪽)에서 오른쪽(마지막 요소쪽)으로 진행
		right -= 1; //오른쪽(마지막 요소쪽)에서 왼쪽(0번 요소쪽)으로 진행
	}

	return arr;
}
int main() {
	int arr[4] = { 1, 4, 2, 3 };
	int arr_len = 4;

	return 0;
}