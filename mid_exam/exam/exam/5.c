#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int i, j, e;
	printf("��� �ϰ���� ���� : ");
	scanf("%d" , &e);
	int k = e;
	for (int i = 1; i <= e; i++){
		for (int j = 1; j <= k; j++){
			printf("%d", j);
		}
		printf("\n");
		k--;
	}


	return 0;
}