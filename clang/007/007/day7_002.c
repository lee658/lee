//#pragma warning(disable:4996)
//#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, sum = 0;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++){
		sum += i;
	}

	printf("%d", sum);

	return 0;
}