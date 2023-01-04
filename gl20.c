#include <stdio.h>
#include <stdlib.h>

int solution(int arr[][4], int n, int k){
	int answer = 0;
	int min;
	for (int i = 1; i <= k; ++i) {
		min = func_a(arr, n);
		func_b(arr, n, min);
	}
	answer = min;
return answer;
	}
int func_a(int a[][4], int n) {
	int min = 100;
	for (int rv = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (min > a[r][c])
				min = a[r][c];
		}
	}
	return min;
}
int func_b(int a[][4], int n, int del) {
	for (int r = 0; r < n; ++r) {
		for (int c = 0; c < 4; ++c) {
			if (del == a[r][c]) {
				a[r][c] = 1001;
			}
		}
	}
	return 0;
}
void main() {
	int ans;
	int num[][4] = { {5,12,4,31},{24,13,11,2},{43,44,19,26},{33,65,20,21} };
	ans = solution(num, 4, 3);
	printf("%d", ans);
}