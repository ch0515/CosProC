#include <stdio.h>
#include <stdlib.h>
void main() {
	int number = 5;
	int* ptr = &number;
	printf("number의 값 %d\n", number);
	*ptr = *ptr + 5;
	printf("number의 값 : %d\n", number);

	//포인터 변수의 크기
	//==>sizeof(포인터 변수) : 주소값 크기
	//sizeof(*포인터 변수) : 포인터변수가 가리키고 있는 대상의 자료형

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

	//포인터 배열 : 포인터변수들의 배열
	char* pStr[4] = { "red","green","blue","gray" };
	printf("0번 문자열 값 : %s", pStr[0]);

	//동적 메모리 할당
	int* pInt;
	pInt = (int*)malloc(sizeof(int));

	*pInt = 14;
	printf("%d\n", *pInt);

	free(pInt);
}
