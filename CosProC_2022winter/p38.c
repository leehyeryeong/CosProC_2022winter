#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char s1[100] = "���ѹα� ������";
	char s2[100];
	char s3[100];
	//���ڿ��� ���̸� ��ȯ�Ѵ�.
	printf("s1 ���ڿ��� ����:  %d\n", strlen(s1));
	strcpy(s2, s1); //s1 �迭�� ���� s2 �迭�� �����Ѵ�.
	printf("%s\n", s2);
	strcat(s2, s1); //s1 �迭�� ���� s2�� ���� �����δ�.
	printf("%s\n", s2);
	//���ڿ��� ��, ��ġ�ϸ� 0, �ٸ��� 1, �Ǵ� -1
	printf("%d\n", strcmp("school", "boy"));
	printf("%d\n", strcmp("boy", "school"));
	printf("%d\n", strcmp("boy", "boy"));

	return 0;
}