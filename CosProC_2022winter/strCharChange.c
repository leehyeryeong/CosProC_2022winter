#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//문자열 내 문자들 바꾸는 함수 빈칸 채우기
int func_a(char dest[], char src[]) {
	int i;
	dest[0] = src[0];

	for (i = 1; src[i] != 0; i++) {
		dest[i] = src[i] + dest[0];
	}
	dest[i] = 0;

	return 0;
}
char* solution(char string[]) {
	char* encoded = (char*)malloc(sizeof(char)*(strlen(string)+1));
	func_a(encoded, string);

	return encoded;
}
int main() {
	char string[] = "korean fighting";
	char* result = solution(string);
	printf("%s \n", result);

	char dest[80] = { 0 };
	dest[0] = result[0];
	int i;

	for (i = 1; result[i] != 0; i++) {
		dest[i] = result[i] - dest[0];
	}

	dest[i] = 0;
	printf("%s \n", dest);

	return 0;
}