#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* func_a(int s[], int arr_size) {
	int* ret = (int*)malloc(sizeof(int) * 2);
	ret[0] = ret[1] = s[0];
	for (int i = 1; i < arr_size; ++i) {
		if (s[i] > ret[0])
			ret[0] = s[i];
		if (s[i] < ret[1])
			ret[1] = s[1];
	}
	return ret;
}
int func_b(int s[], int arr_size) {
	int ret = 0;
	for (int i = 0; i < arr_size; ++i)
		ret += s[i];
	return ret;
}
int solution(int scores[], int scores_len) {
	int sum = func_b(scores, scores_len);
	int* score = func_a(scores, scores_len);
	return sum - score[0] - score[1];
}
void main() {
	int scores[] = { 20,50,80,30,50,80 };
	int len = sizeof(scores) / sizeof(scores[0]);
	int result = solution(scores, len);
	printf("%d \n", result);
}