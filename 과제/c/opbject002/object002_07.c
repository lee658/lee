#include <stdio.h>

int main() {
	int m, v;
	float e;

	printf("질량(kg) : ");
	scanf_s("%d", &m);
	printf("속도(m/s) : ");
	scanf_s("%d", &v);
	
	e = 0.5 * m * v * v;
	printf("운동에너지(J) : %lf", e);
	

	return 0;
}