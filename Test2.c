#include <stdio.h>
#include <stdlib.h>
void main() {
	int number = 5;
	int* ptr = &number;
	printf("number�� �� %d\n", number);
	*ptr = *ptr + 5;
	printf("number�� �� : %d\n", number);

	//������ ������ ũ��
	//==>sizeof(������ ����) : �ּҰ� ũ��
	//sizeof(*������ ����) : �����ͺ����� ����Ű�� �ִ� ����� �ڷ���

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pArr;
	int i;
	pArr = &arr1[0];
	for (i = 0; i < 10; i++) {
		printf("%p: %d\n", &arr1[i], arr1[i]);
	}
	for (i = 0; i < 10; i++) {
		printf("%p: %d\n", pArr + i, *(pArr + i));
	}

	//������ �迭 : �����ͺ������� �迭
	char* pStr[4] = { "red","green","blue","gray" };
	printf("0�� ���ڿ� �� : %s", pStr[0]);

	//���� �޸� �Ҵ�
	int* pInt;
	pInt = (int*)malloc(sizeof(int));

	*pInt = 14;
	printf("%d\n", *pInt);

	free(pInt);
}
