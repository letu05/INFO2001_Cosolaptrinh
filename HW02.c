#include<stdio.h>
int main(){
	int a,b;
	printf("a, b (b!=0, -10^18<=a,b<=10^18):", a, b);
	scanf("%d %d", &a, &b);
	
	int c,d;
	c = a / b;
	d = a % b;
	printf("Phan Nguyen Phan du: %d %d", c,d);
	return 0;
}
