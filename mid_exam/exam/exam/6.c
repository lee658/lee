// 1. 키보드로 두개의 정수를입력받아서 3항 연산자를 사용하여 큰값을 출력하는 프로그램 작성 (4)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int main() {
	int num;
	int w, t;
	
	printf("학번 키 몸무게 (모두 정수만) :");
	scanf("%d %d %d", &num, &t, &w);
	
	int bmi = (w * 10000) / (t * t);
	bmi >= 23 ? printf("결과 %d : 과체중 비만", bmi) : printf("결과 %d : 정상", bmi);


	return 0;
}