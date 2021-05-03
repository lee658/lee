
#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, d;

	scanf_s("%lf %lf %lf", &a, &b, &c);

	if (a ==0)
	{
		printf("%f", -c / b);
	}
	else
	{
		d = sqrt(b * b - 4.0 * a * c);
		if (d >= 0)
		{
			printf("%f", (-b +d)/(2.0*a));
			printf("%f", (-b -d)/(2.0*a));
		}
		else
		{
			printf("nope");
		}
	}
	return 0;
}