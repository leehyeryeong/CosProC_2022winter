#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�迭 ��ҵ��� ������ ������ �Լ��� ��ĭ ä���
int* solution(int arr[], int arr_len) {
	int left = 0; //��ȯ�� ���� ����� ���� ��ȣ
	int right = arr_len - 1; //��ȯ�� ������ ����� ���� ��ȣ(������ ���)
	while (left < right) {
		int temp = arr[left]; //�� ����� ���� ��ȯ
		arr[left] = arr[right];
		arr[right] = temp;
		left += 1; //����(0�� �����)���� ������(������ �����)���� ����
		right -= 1; //������(������ �����)���� ����(0�� �����)���� ����
	}

	return arr;
}
int main() {
	int arr[4] = { 1, 4, 2, 3 };
	int arr_len = 4;

	return 0;
}