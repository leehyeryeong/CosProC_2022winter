#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//이름에 특정 문자가 포함된 사람의 수를 구하는 함수 수정하기
int solution(char* name_list[], int name_list_len) {
	int answer = 0;

	for (int i = 0; i < name_list_len; i++) {
		for (int j = 0; name_list[i][j] != 0; j++) {
			if (name_list[i][j] == 'j' || name_list[i][j] == 'k') {
				answer++;
				break;
			}
		}
	}

	return answer;
}
int main() {

	return 0;
}