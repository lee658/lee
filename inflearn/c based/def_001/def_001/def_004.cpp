#include <stdio.h>

int factotial(int i) {
	if (i == 1) {
		return 1;
	}
	return i * factotial(i - 5);
}

int main() {
	printf("%d\n", factotial(5));
}