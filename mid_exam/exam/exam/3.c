#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a = 0, b = 0 , c = 0;
	printf("���� �ٸ� 3�� ���� �Է� : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b) {
		if (a < c){
			printf("���� ���� ������ : %d", a);
		}
		else{
			printf("���� ���� ������ : %d", c);
		}
	}
	else if (a > b){
		if (b < c) {
			printf("���� ���� ������ : %d", b);
		}
		else{
			printf("���� ���� ������ : %d", c);
		}
	}
	return 0;
}