#include <stdio.h>

int main() {
	int user, ch, pr, c1, c2, c3, c4;
	scanf_s("%d", &pr);
	scanf_s("%d", &user);
	ch = user - pr;
	c1 = ch / 5000;
	ch = ch % 5000;
	c2 = ch / 1000;
	ch = ch % 1000;
	c3 = ch / 500;
	ch = ch % 500;
	c4 = ch / 100;
	ch = ch % 100;

	printf("%d\n", c1);
	printf("%d\n", c2);
	printf("%d\n", c3);
	printf("%d\n", c4);

	return 0;
}