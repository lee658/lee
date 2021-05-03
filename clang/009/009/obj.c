#include <stdio.h>
#define SEED 17
#define MULT 25173
#define INC 13849
#define MOD 65536

unsigned int cc = 0;
static unsigned seed = SEED;

unsigned randi(void) {
	seed = (MULT * seed + INC) % MOD;
	cc++;

	return seed;
}

double randf() {
	seed = (MULT * seed + INC) % MOD;
	cc++;

	return seed / (double)MOD;
}