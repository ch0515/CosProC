#include <stdio.h>
#include <stdlib.h>

int solution(int stones[], int stones_len) {
	int cnt = 0;
	int current = 0;
	while (current < stones_len) {
		current += stones[current];
		cnt++;
	}
	return cnt;
}
int main() {
	int stones[] = { 2,5,1,3,2,1 };
	int ans = solution(stones, 6);
	printf("%d", ans);
}