#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char word[6][20] = { "한국", "미국", "일본", "영국", "독일", "호주" };
	char key[20] = { 0 };
	int cnt;

	strcpy(key, "독일");
	printf("찾을 단어: %s\n", key);
	cnt = 0;

	for (int i = 0; i < 6; i++) {
		if (strcmp(word[i], key) == 0) {
			printf("독일은 %d번째에 있습니다.", i + 1);
			cnt++;
		}
	}

	if (cnt == 0) printf("찾을 수 없습니다.\n");

	return 0;
}