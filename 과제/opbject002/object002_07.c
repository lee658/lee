#include <stdio.h>

int main() {
	int m, v;
	float e;

	printf("����(kg) : ");
	scanf_s("%d", &m);
	printf("�ӵ�(m/s) : ");
	scanf_s("%d", &v);
	
	e = 0.5 * m * v * v;
	printf("�������(J) : %lf", e);
	

	return 0;
}