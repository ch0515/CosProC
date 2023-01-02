#include <stdio.h>

int solution(int p[]) {
	printf("p이 크기 %d\n", sizeof(p));
	return 0;
}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("arr의 크기 %d\n", sizeof(arr));
	solution(arr);
	return 0;
}