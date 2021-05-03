#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	int a = 0, g = 0 ;
	float sum = 0, result = 0;

	scanf_s("%d", &a);

	for (int i = 0; i < a; i++){
		scanf_s("%d", &g);
		sum += g;
	}

	result = sum / a;
	printf("%f", result);

	return 0;
}