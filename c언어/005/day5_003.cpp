#include <stdio.h>

int main() {
	int i, m, s, se;
	se = 60;

	scanf_s("%d", &i);

	m = i / se;
	s = i % se;
	
	printf("%d %d %d\n", i, m, s);

	return 0;
}