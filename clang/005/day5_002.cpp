#include <stdio.h>

int main() {
	double x, y, result;
	
	scanf_s("%f %f", &x, &y);

	printf("+ %f\n", x+y);
	printf("- %f\n", x-y);
	printf("* %f\n", x*y);
	printf("/ %f\n", x/y);
	return 0;
}