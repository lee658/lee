#include <stdio.h>

int main()
{
	double temperature_f, temperature_c;

	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%lf", &temperature_f);

	temperature_c = (5.0 / 9.0) * (temperature_f - 32.0);

	printf("�������� %lf�� �Դϴ�.", temperature_c);

	return 0;
}