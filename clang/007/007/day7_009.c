#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a = 99, c = 0, n;

	do{
		scanf("%d", &n);
		if (n >a){
			printf("up\n");
		}
		if (n < a){
			printf("down\n");
		}
		c++;
	} while (n != a);
	printf("count %d ", c);



	return 0;
}