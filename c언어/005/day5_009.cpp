#include <stdio.h>

int main() {
	int y, x;
	scanf_s("%d", &y);
	
	x = (y %4 == 0) && (y % 100 != 0 ) || (y %400 ==0);

	printf("%d\n", x);


	return 0;
}