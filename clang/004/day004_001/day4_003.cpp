#include <stdio.h>
#include <limits>

int main() {
	short s = SHRT_MAX;
	unsigned short	us = USHRT_MAX; // 65535

	s = s + 1;
	us = us + 1;
	
	printf("%d\n", s);
	printf("%d", us);
	
	return 0;
}