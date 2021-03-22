#include <stdio.h>

int main() {
	float x = 1.23456789;
	double y = 1.23456789;

	printf("float %d\n",sizeof(float));
	printf("double %d\n", sizeof(double));

	printf("x %30.25f\n", x);
	printf("y %30.25f\n", y);
	return 0;
}