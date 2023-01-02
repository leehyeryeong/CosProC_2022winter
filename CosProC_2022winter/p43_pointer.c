#include <stdio.h>

void main() {
	int number;
	int* pNumber = NULL;					//주소를 저장하지 않은 상태를 표시
	number = 5;
	printf("number의 값: %d\n", number);

	pNumber = &number;						//number 변수의 주소를 가리킨다.
	*pNumber = *pNumber + 5;				//*pNumber는 number라고 쓴 것과 같다.
	printf("number의 값: %d\n", number);

	//같은 주소가 나오게 한다.
	printf("number의 주소값(%p): %p\n", &number);
	printf("pNumber의 값: %p\n", pNumber);

	return 0;
}