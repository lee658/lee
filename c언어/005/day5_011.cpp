#include <stdio.h>

int main() {
	char data = 'a', key = 0xff;
	char en_data = data ^ key;

	printf("%c\n", en_data);

	char dr_data = en_data ^ key;

	printf("%c", dr_data);

	return 0;
}