#include <stdio.h>

int count = 0;
int cost = 10;
int money = 10000;

void buy(int cost, int in) {
	count += in;
	money -= cost;
	printf("%d\n", count);
	printf("%d\n", money);
}


int main() {
	
	buy(100, 5);

	
	buy(200, 10);


	return 0;
}