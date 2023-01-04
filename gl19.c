#include <stdio.h>

int solution(int price[], int price_len, int money) {
	int answer = 0;
	for (int i = 0; i < price_len; i++) {
		answer += price[i];
	}
	answer = money - answer;
	return answer;
}
void main() {
	int ans;
	int price[] = { 2100, 3200, 2100, 800 };
	ans = solution(price, 4, 10000);
	printf("%d", ans);
}