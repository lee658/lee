#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int s;
	q:
	printf("점수 입력 : ");
	scanf("%d", &s);
	if (s < 0 || s > 100){
		printf("예외\n");
		goto q;
	}
	if (s >= 90) {
		printf("A");
	}
	else if (s >= 80){
		printf("b");
	}
	else if (s >= 70) {
		printf("c");
	}
	else if (s >= 60) {
		printf("d");
	}
	else{
		printf("f");
	}

	return 0;
}