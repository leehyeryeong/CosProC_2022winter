#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(int len) {						
	int* arr = (int*)malloc(sizeof(int) * len);	//len���� ���� ������ �����Ѵ�.
	for (int i = 0; i < 10; ++i) {
		//result[i] = i + 100;
		arr[i] = i + 100;
	}
	return arr;									//�����Ҵ�� �迭�� ���� �ּҸ� ��ȯ�Ѵ�.
}
int main() {
	int* result;
	result = solution(10);						//�迭�� ���� �ּҸ� ��ȯ �޴´�.
	for (int i = 0; i < 10; ++i) {				//��ȯ ���� �迭�� ���̸� �˰� �ִ�.
		printf("%d ", result[i]);
	}

	return 0;
}