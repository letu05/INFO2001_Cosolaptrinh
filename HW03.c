#include<stdio.h>
int main(){
	int x;
	printf("x:", x);
	scanf("%d", &x);
	int A;
	A=pow(x,3)+3*pow(x,2)+x+1;
	if (0 < x <10^5){
		printf("A(x) = %d", A);
	} else{
		printf("ko hop le");
	}
	return 0;
}
