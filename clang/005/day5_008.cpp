#include <stdio.h>

int main() {
	int x, y;
	scanf_s("%d %d",&x ,&y);

	printf("%d\n", x==y);
	printf("%d\n", x!=y);
	printf("%d\n", x>y);
	printf("%d\n", x>y);
	printf("%d\n", x>=y);
	printf("%d\n", x<=y);

	return 0;
}