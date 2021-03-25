#include <stdio.h>

int main()
{
	float a, b, c, sum, avg;

	printf("실수를 입력하시오: ");
	scanf_s("%f", &a);

	printf("실수를 입력하시오: ");
	scanf_s("%f", &b);

	printf("실수를 입력하시오: ");
	scanf_s("%f", &c);
	sum = a + b + c;
	avg = sum / 3.0;
	printf("합은%f이고 평균은 %f입니다.", sum, avg);

	return 0;
}