#include <Stdio.h>

int main() {
	int x, y, z, max;

	printf("3개의 정수를 입력하세요: ");
	scanf_s("%d %d %d", &x, &y, &z);
	max = x > y ? (x > z ? x : z) : (y > z) ? y : z;
	printf("최대값 %d\n", max);
	return 0;
}