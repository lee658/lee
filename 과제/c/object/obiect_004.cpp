#include <stdio.h>

int main() {
	double a, b;
	
	printf("ȭ������ �Է��Ͻÿ�:");
	scanf_s("%lf", &a);

	b = (5.0 / 9.0) * (a - 32.0);
	printf("�������� %lf�� �Դϴ�.", b);

	return 0;
}