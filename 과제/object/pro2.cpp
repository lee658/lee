#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float mlie;
	double meter;

	printf("마일을 입력하시오:");
	scanf_s("%f", &mlie);

	meter = 1609.0 * mlie;
	printf("%f마일은 %lf미터 입니다.", mlie, meter);
	
	return 0;
}