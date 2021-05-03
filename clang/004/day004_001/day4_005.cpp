#include <stdio.h>
#define TAX 0.2

int main() {
	const int months = 12;
	int m, y;

	scanf_s("%d", &m);
	y = months * m;

	printf("%d\n", y);
	printf("%f\n", y *TAX);

	return 0;
}
