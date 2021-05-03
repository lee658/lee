#include <stdio.h>

long f(int n) {
	printf("%d \n",n);

	if (n <=1){
		return 1;
	}
	else{
		return n * f(n - 1);
	}
}

int main() {
	int x = 5;
	long f1;

	f1 = f(x);

	return 0;
}

