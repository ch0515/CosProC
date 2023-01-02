//���� 01
//���� :
//Ƽ���� ������� ���� ������� "XS","S","M","L","XL","XXL"����
//���� ��������� ������� �迭�� ��� ����

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
int* solution(char* shirt_size[], int shirt_size_len) {
	int* answer = (int*)malloc(sizeof(int)*6);
	//���⿡ �ڵ� �ۼ�
	for (int i = 0; i < 6; i++) {
		answer[i] = 0;
	}
	for (int i = 0; i < shirt_size_len; i++) {
		if (strcmp(shirt_size[i], "xs") == 0) {
			answer[0]++;
		}
		else if (strcmp(shirt_size[i], "s") == 0) {
			answer[1]++;
		}
		else if (strcmp(shirt_size[i], "m") == 0) {
			answer[2]++;
		}
		else if (strcmp(shirt_size[i], "l") == 0) {
			answer[3]++;
		}
		else if (strcmp(shirt_size[i], "xl") == 0) {
			answer[4]++;
		}
		else if (strcmp(shirt_size[i], "xxl") == 0) {
			answer[5]++;
		}
	}
	return answer;
}
int main() {
	int* ans;
	char* shirtsize[] = { "xs","s","xxl","xs","xl" };
	ans = solution(shirtsize, 5);
	for (int i = 0; i < 6; i++) {
		printf("%3d", ans[i]);
	}
}