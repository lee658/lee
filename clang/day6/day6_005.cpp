#include <stdio.h>	

int main() {
	int a;
	scanf_s("%d", &a);

	switch (a)
	{
	case 2:
		printf("28");
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("30");
	default:
		printf("31");
	}

	return 0;
}