#include<stdio.h>
int main(){
	double c,f;
	printf("C:", c);
	scanf("%lf", &c);
	if (0<c<106){
		f=(c*9/5)+32;
	    printf("f= %.2lf\n", f);
	} else{
		printf("khong hop le");
	}
	return 0;
}
