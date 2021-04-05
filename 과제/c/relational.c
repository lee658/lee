#include <stdio.h>

int main() {
	int x, y;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf_s("%d%d", &x, &y);

	printf("x == y�� ��� ��: %d\n", x == y);
	printf("x != y�� ��� ��: %d\n", x != y);
	printf("x > y�� ��� ��: %d\n", x > y);
	printf("x < y�� ��� ��: %d\n", x < y);
	printf("x >= y�� ��� ��: %d\n", x >= y);
	printf("x <= y�� ��� ��: %d\n", x <= y);

	return 0;
}
