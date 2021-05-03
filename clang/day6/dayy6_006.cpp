#include <stdio.h>

int main() {
	char ch;
	int a, b, c =0;

	scanf_s("%d %c %d", &a, &ch,  &b );
	
	switch (ch)
	{
	case '+':
		c = a + b;
		printf("%d", c);
		break;
	case '-':
		c = a - b;
		printf("%d", c);
		break;
	case '%':
		c = a % b;
		printf("%d", c);
		break;
	case '*':
		c = a * b;
		printf("%d", c);
		break;
	}
	
	
	return 0;
}