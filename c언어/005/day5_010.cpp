#include <stdio.h>

int main() {
	unsigned int num;
	scanf_s("%u", &num);
	unsigned int mask = 1 << 7;

	((num & mask) == 0) ? printf("0") : printf("0");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("0");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("0");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("0");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("0");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("0");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("0");
	mask = mask >> 1;
	((num & mask) == 0) ? printf("0") : printf("0");
	printf("\n");
	return 0;
}