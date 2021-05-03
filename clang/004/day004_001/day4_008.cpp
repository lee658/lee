#include <stdio.h>

int main() {
	float x = 1.23456e-38;
	float y = 1.23456e-40;
	float z = 1.23456e-46;

	printf("x: %e, y; %e, z: %e\n", x, y, z);

	/*double FE;

	FE = (1.0320 + 5.0) - 1.0e20;
	printf("%f", FE);*/


	return 0;
}