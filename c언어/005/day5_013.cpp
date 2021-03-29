#include <stdio.h>

int main() {
	int b; double a;
	a = 5 / 4;
	printf("%f\n",a);
	a = (double)5 / 4;
	printf("%f\n", a);
	a = 5.0 / 4;
	printf("%f\n", a);

	b = 1.3 + 1.8;
	printf("%d\n", b);
	b = (int)1.3 + 1.8;
	printf("%d\n", b);
	return 0;
}