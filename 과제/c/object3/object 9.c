#include <stdio.h>

int main(void){
	double stick_height, shadow_length, dist, pyramid_height;

	printf("지팡이의 높이를 입력하시오: ");
	scanf_s("%lf", &stick_height);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf_s("%lf", &shadow_length);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf_s("%lf", &dist);
	pyramid_height = stick_height * dist / shadow_length;
	printf("피라미드의 높이는 %f입니다.\n", pyramid_height);
	return 0;
}