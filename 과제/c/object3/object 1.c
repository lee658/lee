#include <Stdio.h>

int main() {
	int x, y, mog, na;

	printf(" 2���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	mog = x / y;
	na = x % y;

	printf("��: %d ������: %d\n", mog, na);

	return 0;
}