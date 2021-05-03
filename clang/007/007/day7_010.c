#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	
	for (int i = 0; i < 5; i++){
		printf("h\n");
	}
	int sum = 0;
	for (int j = 0; j <= 10; j++){
		sum += j;
	}
	printf("%d\n", sum);

	for (int k = 0; k <= 9; k++){
		printf("%d ", k*k*k);
	}

	return 0;
}