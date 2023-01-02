#include <stdio.h>
#include <stdlib.h>

int* solution(int len) {
	int* arr = (int*)malloc(sizeof(int) * len);
	for (int i = 0; i < len; ++i) {
		arr[i] + 100;
	}
	return arr;
}
int main() {
	int* result;
	result = solution(10);
	for (int i = 0; i < 10; ++i) {
		printf("%d", result[i]);
	}
	return 0;
}