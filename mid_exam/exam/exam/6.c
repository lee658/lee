// 1. Ű����� �ΰ��� �������Է¹޾Ƽ� 3�� �����ڸ� ����Ͽ� ū���� ����ϴ� ���α׷� �ۼ� (4)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int main() {
	int num;
	int w, t;
	
	printf("�й� Ű ������ (��� ������) :");
	scanf("%d %d %d", &num, &t, &w);
	
	int bmi = (w * 10000) / (t * t);
	bmi >= 23 ? printf("��� %d : ��ü�� ��", bmi) : printf("��� %d : ����", bmi);


	return 0;
}