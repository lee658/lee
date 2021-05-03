#include <stdio.h>

int main() {
	int x=0, y;
	printf("%d\n", x+1);
	printf("%d\n", y= x+1);
	printf("%d\n", y= 10+(x =2+7));
	printf("%d\n", y=x=3);

	return 0;
}