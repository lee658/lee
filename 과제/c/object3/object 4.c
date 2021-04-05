#include <stdio.h>

int main() {
	int x, ft = 0;
	float in = 0;

	printf("키를 입력하시오(cm): ");
	scanf_s("%d", &x);
	in = x / 2.54;
	ft = in / 12;
	printf("%dcm는 %d피트 %f인치입니다.\n", x, ft, in);
	return 0;
}