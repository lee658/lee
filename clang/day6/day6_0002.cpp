#include<stdio.h>

int main() {
	int a, b, c;

	printf("2");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	if (b == 0) {
		printf("o nope");
	}
	else
	{
		c = a / b;
		printf("%d", c);
	}


	return 00;
}