#include<stdio.h>
int main(){
	#define PI 3.14
	int r;
	printf("Ban kinh r:", r);
	scanf("%d", &r);
	float a,b;
	a=2 * PI * r; b=PI * r * r;
	printf("Chu vi: %.2f\n", a);
	printf("Dien tich: %.2f", b);
	return 0;
}
