#include <stdio.h>

int main() {
	// ǥ�� ����� ������� --> ��� ����ϴ� �Լ�
	// printf(" ���ڿ�");
	int a = 0;
	a = printf("ó���ϴ�  c ��� ��� \n", 0,0);
	printf("printf �Լ� ��� �� => %d \n", a);

	a = printf("ó���ϴ�  c ��� ��� \n'");
	printf("printf �Լ� ��� �� => %f \n", a);

	printf("ȫ�浿\\��浿\\�ڱ浿");

	printf("'02.07.20 \\ �̼��� \n");

	printf("90		80	70 \n");
	printf("100		100	90 \n");

	printf("90\t80\t70 \n");
	printf("100\t100\t90 \n \b");
	return (int)0;
}