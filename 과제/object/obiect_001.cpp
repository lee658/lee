#include <stdio.h>

int main()
{
	float a, b, c, sum, avg;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%f", &a);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%f", &b);

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%f", &c);
	sum = a + b + c;
	avg = sum / 3.0;
	printf("����%f�̰� ����� %f�Դϴ�.", sum, avg);

	return 0;
}