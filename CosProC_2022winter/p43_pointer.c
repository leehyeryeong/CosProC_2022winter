#include <stdio.h>

void main() {
	int number;
	int* pNumber = NULL;					//�ּҸ� �������� ���� ���¸� ǥ��
	number = 5;
	printf("number�� ��: %d\n", number);

	pNumber = &number;						//number ������ �ּҸ� ����Ų��.
	*pNumber = *pNumber + 5;				//*pNumber�� number��� �� �Ͱ� ����.
	printf("number�� ��: %d\n", number);

	//���� �ּҰ� ������ �Ѵ�.
	printf("number�� �ּҰ�(%p): %p\n", &number);
	printf("pNumber�� ��: %p\n", pNumber);

	return 0;
}