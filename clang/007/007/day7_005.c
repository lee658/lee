#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int main() {
	int x = 0, y, r = 0;

	scanf("%d %d", &x, &y);

	for (;  y != 0; ){
		r = x % y;
		x = y;
		y = r;
	}
	printf("%d", x);


	return 0;
}