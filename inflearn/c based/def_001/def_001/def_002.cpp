#include <stdio.h>

void swap(int* x, int* y) {//&x, &y ·Î °¡´É
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() {
	int a, b;

	scanf_s("%d%d", &a, &b);

	swap(&a, &b);
	printf("%d%d", a, b);
}