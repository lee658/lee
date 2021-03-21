#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int* ptr;

	ptr = &a;
	printf("a value: %d\n", *ptr);
	
	ptr = &b;
	printf("b value: %d\n", *ptr);
}