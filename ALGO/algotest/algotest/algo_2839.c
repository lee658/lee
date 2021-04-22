#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int i, r1 = 0, re = 0, tmp= 0 ;
	scanf("%d", &i);

	re += i / 5;
	tmp += i % 5;
	re += tmp / 3;
	tmp = tmp / 3;

	if (tmp != 0){
		printf("1");
		return 0;
	}
	printf("%d", re);

}