#include <stdio.h>
#include <stdlib.h>

int solution(int height[], int height_len, int k) {
	int answer = 0;
	for (int i = 0; i < height_len; i++) {
		if (height[i] > k) {
			answer++;
		}
	}
	return answer;
}
int main() {
	int data[] = { 170, 180, 168, 183, 173 };
	int ans = solution(data, 5, 177);
	printf("%d", ans);
}