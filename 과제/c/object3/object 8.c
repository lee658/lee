#include <stdio.h>
#define PIE 3.14

int main() {
	float A, V, r;
	printf("�������� �Է��Ͻÿ�: ");
	scanf_s("%f", &r);

	A = 4.0 * PIE * r * r;
	V = 4.0 / 3.0 * PIE*r * r * r;

	printf("���� ǥ����: %f ���� ü��: %f\n", A, V);

	return 0;
}