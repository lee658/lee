#include <stdio.h>

int main() {
	int x = 0;int y = 0; int result;
	
	result = 2 > 3 || 6 > 7;
	printf("%d\n", result);

	result = 2 || 3 && 3 > 2;
	printf("%d\n", result);

	result = -++x + y--;
	printf("%d\n", result);

	return 0;
}