#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//페인트 칠하는데 걸리는 시간을 구하는 함수 빈칸 채우기
int solution(int walls) {
	int answer = 0;
	int painted_walls = 0;
	int i;

	for (i = 1; painted_walls < walls; i++) {
		painted_walls = (i) + (i / 2) + (i / 4);
	}
	answer = i - 1;

	return answer;
}
int main() {
	int walls = 10;
	int ret = solution(walls);
	printf("%d \n", ret);

	return 0;
}