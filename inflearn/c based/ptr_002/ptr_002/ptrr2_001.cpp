#include <stdio.h>

int main() {
	int n;
	int arr[105];

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		if (arr[i]%2 == 1)
		{
			printf("%d", arr[i]);
		}
		
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0)
		{
			printf("%d", arr[i]);
		}

	}



	return 0;
}