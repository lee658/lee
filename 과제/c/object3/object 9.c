#include <stdio.h>

int main(void){
	double stick_height, shadow_length, dist, pyramid_height;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf", &stick_height);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf_s("%lf", &shadow_length);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &dist);
	pyramid_height = stick_height * dist / shadow_length;
	printf("�Ƕ�̵��� ���̴� %f�Դϴ�.\n", pyramid_height);
	return 0;
}