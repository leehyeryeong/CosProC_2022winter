#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//카드 게임 승자 알아내는 함수 작성하기
int solution(int mho_arr[], int mhe_arr[], int arr_len) {
	int result = -1;
	int minho = 0;
	int minhee = 0;

	for (int i = 0; i < arr_len; i++) {
		if (mho_arr[i] > mhe_arr[i]) {
			minho++;
		}
		else if (mho_arr[i] < mhe_arr[i]) {
			minhee++;
		}
	}

	if (minho > minhee) result = 1;
	else if (minho < minhee) result = 0;

	return result;
}
int main() {
	int mho_arr[] = { 1, 6, 11, 12, 2, 7, 8, 9, 10, 3, 4, 5, 13 };
	int mhe_arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	int arr_len = sizeof(mho_arr) / sizeof(mho_arr[0]);
	int res = solution(mho_arr, mhe_arr, arr_len);

	printf("%d \n", res);

	return 0;
}