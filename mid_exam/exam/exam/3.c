#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int a = 0, b = 0 , c = 0;
	printf("서로 다른 3개 정수 입력 : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b) {
		if (a < c){
			printf("가장 작은 정수는 : %d", a);
		}
		else{
			printf("가장 작은 정수는 : %d", c);
		}
	}
	else if (a > b){
		if (b < c) {
			printf("가장 작은 정수는 : %d", b);
		}
		else{
			printf("가장 작은 정수는 : %d", c);
		}
	}
	return 0;
}