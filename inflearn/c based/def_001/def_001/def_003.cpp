#include <stdio.h>

void write(int);
void oupu(int);
void test();

int main() {
	test();

	return 0;
}

void write(int w) {
	printf("%d", w);
}

void oppu(int a) {
	printf("%d", a);
}

void test() {
	write(12);
	oppu(314);
}