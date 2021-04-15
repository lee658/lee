#include <stdio.h>

struct teste  {
	int n;
	char c[500];
	int j;
};


int main() {
	teste mytest{500, "abc", 100};

	printf("%d", mytest.n);

	return 0;
}