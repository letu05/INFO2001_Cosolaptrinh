//Tinh tong cac so le
#include<stdio.h>
int main(){
	int a;
	int sum=0;
	printf("N = ", a);
	scanf("%d", &a);
	int i;
	for (i=1; i<=a; i+=2){
		sum += i;
	}
	printf("Tong cua N so le dau tien la: %d", sum);
	return 0;
}
