#include <stdio.h>
int isTimeofTwo(int n) {
	return (n % 2 == 0) ? 1 : 0;
}
void main() {
	if (isTimeofTwo(10) == 1) {
		printf("2�� ���");
	}
	else {
		printf("2�� ����� �ƴ�");
	}
}