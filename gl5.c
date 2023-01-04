#include <stdio.h>

int solution(int number) {
	int count = 0;
	for (int i = 1; i <= number; i++) {
		int curent = i;
		while (curent != 0) {
			if (curent % 10 ==3 || curent % 10==6|| curent % 10==9) {
				count += 1;
			}
			curent /= 10;
		}
	}
	return count;
}
int main() {
	int ans;
	ans = solution(13);
	printf("%d", ans);
}