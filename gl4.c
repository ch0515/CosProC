#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int solution(int price, char* grade) {
	int answer = 0;
	if (strcmp(grade, "S")==0) {
		answer = price * 0.95;
	}
	else if (strcmp(grade, "G")==0) {
		answer = price * 0.9;
	}
	else if (strcmp(grade, "V")==0) {
		answer = price * 0.85;
	}
	return answer;
}

void main() {
	int ans;
	int price = 10000;
	char* grade = "S";
	ans = solution(price, grade);
	printf("%d", ans);
}