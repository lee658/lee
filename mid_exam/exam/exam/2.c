#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int i = 0, j = 1, c =0, tmp =0;
	printf("����� �Ǻ���ġ ��: ");
	scanf("%d", &c);
	printf("�Ǻ���ġ �� : ");
	for (int k = 0; k <= c; k++) {
		printf("%d ", i);
		tmp = i + j;
		i = j;
		j = tmp;
		
	}

	return 0;
}