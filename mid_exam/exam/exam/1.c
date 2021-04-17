#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a, b;
	printf("2개의 정수를 입력해주세요 : ");
	scanf("%d %d", &a, &b);

	a > b ? printf("%d",  a) : printf("%d", b);



	
	return 0;
}