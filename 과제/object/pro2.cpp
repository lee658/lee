#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float mlie;
	double meter;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%f", &mlie);

	meter = 1609.0 * mlie;
	printf("%f������ %lf���� �Դϴ�.", mlie, meter);
	
	return 0;
}