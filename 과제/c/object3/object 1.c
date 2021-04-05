#include <Stdio.h>

int main() {
	int x, y, mog, na;

	printf(" 2개의 정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	mog = x / y;
	na = x % y;

	printf("몫: %d 나머지: %d\n", mog, na);

	return 0;
}