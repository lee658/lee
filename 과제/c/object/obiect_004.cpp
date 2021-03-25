#include <stdio.h>

int main() {
	double a, b;
	
	printf("화씨값을 입력하시오:");
	scanf_s("%lf", &a);

	b = (5.0 / 9.0) * (a - 32.0);
	printf("섭씨값은 %lf도 입니다.", b);

	return 0;
}