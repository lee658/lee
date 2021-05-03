#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main() {
	int a, sum = 0;

	do{
		scanf("%d", &a);
		sum += a;
	} while (a != 0);

	printf("%d", sum);



	return 0;
}