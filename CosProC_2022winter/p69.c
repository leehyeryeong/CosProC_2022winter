#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char titles[3][20] = { "first", "second", "third" };
	func_a(titles, 3);
}

//int func_a(char p[][20], int n)	//1
int func_a(char(*p)[20], int n) {	//2
	for (int i = 0; i < n; i++) {
		printf("%s\n", p[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 20; j++) {
			printf("%d", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}