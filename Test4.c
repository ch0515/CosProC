#include <stdio.h>

void Swap(int* pa, int* pd) {
	int a = *pa;
	int b = *pd;
	*pa = b;
	*pd = a;
}
int main() {
	int a = 5, b = 8;
	Swap(&a, &b);
	printf("�Լ� ȣ�� ��\n");
	printf("a = %d b = %d\n", a, b);
	return 0;
}