#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	long long i = 0, j = 1, tmp = 0, e = 0, k = 0;
	long long  arr[91] = { 0 };
	scanf("%d", &e);

	for (k; k <= 90; k++){
		arr[k] = i;
		tmp = i + j;
		i = j;
		j = tmp;
	}

	printf("%lld", arr[e]);

	return 0;
}