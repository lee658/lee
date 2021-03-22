#include <stdio.h>

int main() {
	int x;

	printf("x %d\n", sizeof(x));
	printf("int %d\n", sizeof(int));
	printf("double %d\n", sizeof(double));
	printf("char %d\n", sizeof(char));
	printf("float %d\n", sizeof(float));
	printf("long %d\n", sizeof(long));
	printf("long long %d\n", sizeof(long long));
	printf("short %d\n", sizeof(short));
	return 0;
}