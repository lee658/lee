#include <stdio.h>

void printarr(int* arr/*arr[]*/) {
	for (int i = 0; i < 4; i++) {
		
		arr[i] *= 2;
	}
}

int main() {
	int arr[4] = { 1, 2, 3, 4 };

	printarr(arr);

	for (int i = 0; i < 4; i++) {
		printf("%d", arr[i]);
	}
}
