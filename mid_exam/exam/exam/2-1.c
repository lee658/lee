#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int i = 0, j = 1, c = 0, tmp = 0 , e = 0, k =0;
	printf("����� �Ǻ���ġ �� ���� ��: ");
	scanf("%d %d", &c, &e) ;
	printf("�Ǻ���ġ �� : ");
	s:
	for (k; k <= e; k++) {
		if (k >= c){
			printf("%d ", i);
			tmp = i + j;
			i = j;
			j = tmp;
			continue;
		}
		tmp = i + j;
		i = j;
		j = tmp;
	}

	return 0;
}