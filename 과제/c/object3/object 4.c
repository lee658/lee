#include <stdio.h>

int main() {
	int x, ft = 0;
	float in = 0;

	printf("Ű�� �Է��Ͻÿ�(cm): ");
	scanf_s("%d", &x);
	in = x / 2.54;
	ft = in / 12;
	printf("%dcm�� %d��Ʈ %f��ġ�Դϴ�.\n", x, ft, in);
	return 0;
}