#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	float B, H, area;
	
	printf("�ﰢ���� �غ�:");
	scanf_s("%f", &B);

	printf("�ﰢ���� ����:");
	scanf_s("%f", &H);
	
	area = 0.5 * H * B;
	printf("�ﰢ���� ����:%f",area);
	

	return 0;
}