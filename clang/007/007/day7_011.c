#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 2; j++) {
			printf("*");
		}
		printf("\n");
	}

	int i = 1, n = 0;
	scanf("%d", &n);
	int f = 1;

	while (i <= n){
		f = f * i;
		i++;
	}
	printf("%d", f);


	return 0;
}