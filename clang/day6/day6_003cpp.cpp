#include <stdio.h>

int main() {
	char ch[9];
	int a, b, c;

	printf("input\n, ex) 2+5\n>>");
	scanf_s("%d %p %d", &a, &ch, &b);

	if (ch == "+") {
		c = a + b;
		printf("%d", c);
	}
	else if (ch == "-") {
		c = a - b;
		printf("%d", c);
	}
	else if (ch == "%") {
		c = a % b;
		printf("%d", c);
	}
	else if (ch == "*"){
		c = a * b;
	printf("%d", c);
}
	else
		printf("nope");



	return 0;
}