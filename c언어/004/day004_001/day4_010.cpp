#include <stdio.h>

int main() {
	int x, y, z, sum;
	sum = 0;
	scanf_s("%d, %d, %d", x, y, z);
	sum += x, y, z;

	printf("%d", sum);



	
	return 0;
}