#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*void ps() {
	for (int i = 0; i < 15; i++){
		printf("*");
	}
	return 0;
}*/

/*void a(x, y) {
	if (x > y){
		printf("%d", x);
	}
	else{
		printf("%d", y);
	}
	return 0;
}*/

/*void c() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d", a + b);
}*/

/*void d(x) {
	long r = 1;
	for (int i = 1; i <= x; i++){
		r *=  i;
	}
	printf("%d", r);
	return 0;
}*/

/*void e() {
	char m;
	double t = 0;
	for (;1;){
		printf("c, f, q\n");
		scanf("%c", &m);
		if (m == 'c'){
			scanf("%lf", &t);
			printf("%lf\n", 9.0/ 5.0 * t +32);
			continue;
		}
		else if(m == 'f'){
			scanf("%lf", &t);
			printf("%lf\n", (t - 32.0)*5.0/9.0);
			continue;
		}
		else{
			break;
		}
		return 0;
	}
	return 0;
}*/

/*void f(x, y) {
	long r = 1, r2 =1, r3, r4 = 1;
	for (int i = 1; i <= x; i++) {
		r *= i;
	}
	for (int i = 1; i <= y; i++) {
		r2 *= i;
	}
	for (int i = 1; i <= x - y; i++) {
		r4 *= i;
	}
	r3 = (r / (r2 * r4));
	printf("%d", r3);
}*/

/*void g() {
	int n, cnt =0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		if (n % i == 0){
			cnt++;
		}
	}
	if (cnt == 2){
		printf("prime");
	}
	else{
		printf("nope");
	}
	return 0;
}*/



int main() {
	/*ps();
	printf("hello world");
	ps();*/
	
	/*int i, j;
	scanf_s("%d %d", &i, &j);
	a(i, j);*/

	//c();
	
	/*int x;
	scanf_s("%d", &x);
	d(x);*/

	//e();

	/*int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	f(x, y);*/

	//g();

	/*for (int i = 0; i < 5; i++){
		printf("%d ", rand()%45);
	}*/

	


	return 0;
}