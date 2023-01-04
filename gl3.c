#include <stdio.h>

int solution(int scores[], int scores_len) {
	int count = 0;
	for (int i = 0; i < scores_len; i++) {
		if(650 <= scores[i] && scores[i] < 800)
		count += 1;
	}
	return count;
}
void main() {
	int ans;
	int scores[] = { 600, 900, 780, 660, 800, 500, 720, 860, 700 };
	int len = sizeof(scores) / sizeof(scores[0]);
	ans = solution(scores, len);
	printf("%d", ans);
}