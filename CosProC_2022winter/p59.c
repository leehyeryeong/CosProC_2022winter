#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Swap(int* pa, int* pb) {
	int a = *pa;
	int b = *pb;
	*pa = b;
	*pb = a;
}
int main() {
	int a = 5, b = 8;
	Swap(&a, &b);
	printf("함수 호출 후\n");
	printf("a = %d, b = %d\n", a, b);

	return 0;
}