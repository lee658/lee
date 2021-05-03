#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a = 0;

	do{
		printf("1\n");
		printf("2\n");
		printf("3\n");
		scanf("%d", &a);
	} while (a < 1 || a> 3);

	printf("%d", a);



	return 0;
}