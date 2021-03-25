#include <stdio.h>

int main() {
	typedef char str[];
	char na[] = "lee";
	str name = "lee";

	printf("%s", name);


	return 0;
}