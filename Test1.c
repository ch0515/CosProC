#include <stdio.h>
#include <string.h>
void main() {
	//배열 선언과 크기 알아보기
	int arr[10]; // 자료형 배열명[크기]-> 정적 배열
	//배열의 크기는 : sizeof(배열명)
	printf("arr 배열의 크기 : %d\n", sizeof(arr));
	printf("arr 배열 요소의 크기 : %d\n", sizeof(arr[0]));
	printf("arr 배열의 길이 : %d\n", 10);

	arr[1] = 7;
	printf("배열요소의 값 : %d\n", arr[1]);
	int i;

	for (i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}
	for (i = 0; i < 10; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	//다차원 배열 행먼저 접근
	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int k, l;

	for (k = 0; k < 3; k++) {
		for (l = 0; l < 4; l++) {
			printf("%d", arr1[k][l]);
		}
		printf("\n");
	}
	//배열의 크기
	printf("arr1의 크기 : %d\n", sizeof(arr1));
	printf("arr1[0]의 크기:%d\n", sizeof(arr1[10]));
	printf("arr1[2][3]의 크기 : %d\n", sizeof(arr1[2][3]));

	//1> 배열 처리
	//합계

	//최대/최소
	int a[10] = { 1,2,-4,56,8,89,77,23,4,22 };
	int max, maxpos;
	max = a[0];
	maxpos = 0;

	for (int i = 1; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
			maxpos = i;
		}
	}
	printf("최대값 : %d, 요소버노:%d\n", max, maxpos);

	//배열 값 찾기 => if(찾고자 하는 키 == 매열명[위치])

	//배열의 복사 ==> 복사대상배열명[] = 복사원본배열명
	int c[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int d[10];
	for (int m = 0; m < 10; m++) {
		d[m] = c[m];
	}

	//P31 문자열=> 문자열 끝에 null값 들어옴
	//문자열 처리 함수 : #include <string.h>
	//2> 문자열 길이 : strlen
	//3> 문자열 복사 : strcopy
	//4> 문자열 비교 : strcmp
	//5> 문자열 결합 : strconcat (strcat)

	char s1[100] = "대한민국 파이팅";
	char s2[100];
	//문자열의 길이를 반환한다.
	printf("s1 문자열의 길이 : %d\n", strlen(s1));

	strcpy(s2, s1);//s1 매열의 값을 s2배열로 복사한다.
	printf("%s\n", s2);

	strcat(s2, s1); //s1 배열의 값을 s2의 값에 덧붙인다.
	printf("%s\n", s2);

	//문자열의 비교, 일치하면 0, 다르면 1 또는 -1
	printf("%d\n", strcmp("school", "body"));
	printf("%d\n", strcmp("body", "school"));
	printf("%d\n", strcmp("body", "body"));
}