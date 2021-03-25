#include <stdio.h>

int main() {

	float B, H, area;
	
	printf("»ï°¢ÇüÀÇ ¹Øº¯:");
	scanf_s("%f", &B);

	printf("»ï°¢ÇüÀÇ ³ôÀÌ:");
	scanf_s("%f", &H);
	
	area = 0.5 * H * B;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ:%f",area);
	

	return 0;
}