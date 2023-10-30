// Kiem tra so nguyen to
#include<stdio.h>
int main(){
	int a;
	printf("Nhap so N: ", a);
	scanf("%d", &a);
	if(a<2){
		printf("N khong phai so nguyen to");
		return 0;
	}
	int b;
	for (b = 2; b <= sqrt(a); b++){
		if(a % b == 0){
			printf("N khong phai la so nguyen to");
			return 0;
		}
	}
	printf("N la so nguyen to");
	return 0;
}
