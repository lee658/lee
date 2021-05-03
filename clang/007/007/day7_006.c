#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main() {
	int a, y = 0;
	double i, c;
	i = 100.0;
	c = i;
	scanf("%d", &a);

	for (; c > i / 10.0;){
		y += a;
		c = c / 2.0;
		printf("%d %f\n", y, c);
	}

	printf("10 under %d", y);

	return 0;
}