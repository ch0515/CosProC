#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int price, char* grade) {
	int answer = 0;
	if (strcmp(grade, "S") == 0) {
		answer = (int)(price * 1.05);
	}
	if (strcmp(grade, "G") == 0) {
		answer = (int)(price * 1.10);
	}
	if (strcmp(grade, "V") == 0) {
		answer = (int)(price * 1.15);
	}
	return answer;
}
void main() {
	int price = 10000;
	char* grade = "S";
	int result = solution(price, grade);
	printf("%d\n", result);
}