#include <stdio.h>

int main() {
	int x;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	printf("���� �ڸ�: %d\n", x / 10);
	printf("���� �ڸ� : %d\n", x % 10);

	return 0;
}