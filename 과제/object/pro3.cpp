#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	float B, H, area;
	
	printf("삼각형의 밑변:");
	scanf_s("%f", &B);

	printf("삼각형의 높이:");
	scanf_s("%f", &H);
	
	area = 0.5 * H * B;
	printf("삼각형의 넓이:%f",area);
	

	return 0;
}