#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int i = 0, j = 1, c =0, tmp =0;
	printf("출력할 피보나치 항: ");
	scanf("%d", &c);
	printf("피보나치 수 : ");
	for (int k = 0; k <= c; k++) {
		printf("%d ", i);
		tmp = i + j;
		i = j;
		j = tmp;
		
	}

	return 0;
}