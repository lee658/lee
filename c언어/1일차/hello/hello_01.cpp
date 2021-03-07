#include <stdio.h>

int main() {
	// 표준 입출력 헤더파일 --> 출력 담당하는 함수
	// printf(" 문자열");
	int a = 0;
	a = printf("처음하는  c 언어 출력 \n", 0,0);
	printf("printf 함수 결과 값 => %d \n", a);

	a = printf("처음하는  c 언어 출력 \n'");
	printf("printf 함수 결과 값 => %f \n", a);

	printf("홍길동\\김길동\\박길동");

	printf("'02.07.20 \\ 이순신 \n");

	printf("90		80	70 \n");
	printf("100		100	90 \n");

	printf("90\t80\t70 \n");
	printf("100\t100\t90 \n \b");
	return (int)0;
}