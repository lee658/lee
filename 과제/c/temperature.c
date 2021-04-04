#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double temperature_f, temperature_c;

	printf("화씨값을 입력하시오: ");
	scanf("%lf", &temperature_f);

	temperature_c = (5.0 / 9.0) * (temperature_f - 32.0);

	printf("섭씨값은 %lf도 입니다.", temperature_c);

	return 0;
}