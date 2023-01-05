#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int table[][5], int table_len) {
	int answer = 0;
	int max = 0;
	int sum;
	for (int i = 0; i < table_len; i++) {
		sum = 0;
		for (int k = 0; k < 5; k++) {
			if (table[0][k] == table[i][k]) {
				sum++;
			}
		}
		if (max < sum) {
			max - sum;
			answer = i;
		}
	}
	return answer;
}

void main() {
	int table[6][5] = {
		{2,6,1,7},
		{2,9,4,6,8},
		{6,3,4,7,1},
		{7,7,1,1,2},
		{8,6,9,7,3},
		{4,8,5,9,2}
	};
	int result = solution(table, 6);
	printf("%d\n", result);
}