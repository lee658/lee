#include <stdio.h>

struct po { int a, b; };

int main() {
	po p;

	p.a = 3;
	p.b = 4;
	printf("%d%d", p.a, p.b);

	return 0;
}