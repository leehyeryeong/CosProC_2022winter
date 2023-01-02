#include <stdio.h>

void main() {
	int arr[3][4] = { 0 };
	printf("arr의 크기: %d\n", sizeof(arr));				//(3 * 4) * 4 = 48
	printf("arr[0]의 크기: %d\n", sizeof(arr[0]));			//4 * 4 = 16
	printf("arr[1]의 크기: %d\n", sizeof(arr[1]));			//16
	printf("arr[2]의 크기: %d\n", sizeof(arr[2]));			//16
	printf("arr[2][3]의 크기: %d\n", sizeof(arr[2][3]));	//4

	char ch = '9';
	int number = ch - 48; //ch - '0'
	printf("%3d", number);									//'9'(==57) - 48(=='0') = 9
	printf("%3d", ch);										//57 == '0'

	return 0;
}