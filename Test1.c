#include <stdio.h>
#include <string.h>
void main() {
	//�迭 ����� ũ�� �˾ƺ���
	int arr[10]; // �ڷ��� �迭��[ũ��]-> ���� �迭
	//�迭�� ũ��� : sizeof(�迭��)
	printf("arr �迭�� ũ�� : %d\n", sizeof(arr));
	printf("arr �迭 ����� ũ�� : %d\n", sizeof(arr[0]));
	printf("arr �迭�� ���� : %d\n", 10);

	arr[1] = 7;
	printf("�迭����� �� : %d\n", arr[1]);
	int i;

	for (i = 0; i < 10; i++) {
		arr[i] = i + 1;
	}
	for (i = 0; i < 10; i++) {
		printf("arr[%d] : %d\n", i, arr[i]);
	}

	//������ �迭 ����� ����
	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int k, l;

	for (k = 0; k < 3; k++) {
		for (l = 0; l < 4; l++) {
			printf("%d", arr1[k][l]);
		}
		printf("\n");
	}
	//�迭�� ũ��
	printf("arr1�� ũ�� : %d\n", sizeof(arr1));
	printf("arr1[0]�� ũ��:%d\n", sizeof(arr1[10]));
	printf("arr1[2][3]�� ũ�� : %d\n", sizeof(arr1[2][3]));

	//1> �迭 ó��
	//�հ�

	//�ִ�/�ּ�
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
	printf("�ִ밪 : %d, ��ҹ���:%d\n", max, maxpos);

	//�迭 �� ã�� => if(ã���� �ϴ� Ű == �ſ���[��ġ])

	//�迭�� ���� ==> ������迭��[] = ��������迭��
	int c[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int d[10];
	for (int m = 0; m < 10; m++) {
		d[m] = c[m];
	}

	//P31 ���ڿ�=> ���ڿ� ���� null�� ����
	//���ڿ� ó�� �Լ� : #include <string.h>
	//2> ���ڿ� ���� : strlen
	//3> ���ڿ� ���� : strcopy
	//4> ���ڿ� �� : strcmp
	//5> ���ڿ� ���� : strconcat (strcat)

	char s1[100] = "���ѹα� ������";
	char s2[100];
	//���ڿ��� ���̸� ��ȯ�Ѵ�.
	printf("s1 ���ڿ��� ���� : %d\n", strlen(s1));

	strcpy(s2, s1);//s1 �ſ��� ���� s2�迭�� �����Ѵ�.
	printf("%s\n", s2);

	strcat(s2, s1); //s1 �迭�� ���� s2�� ���� �����δ�.
	printf("%s\n", s2);

	//���ڿ��� ��, ��ġ�ϸ� 0, �ٸ��� 1 �Ǵ� -1
	printf("%d\n", strcmp("school", "body"));
	printf("%d\n", strcmp("body", "school"));
	printf("%d\n", strcmp("body", "body"));
}