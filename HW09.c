#include<stdio.h>
int main(){
	//chuong trinh tong cac so tu 1-n
    int n;
	int sum=0;
	printf("so nguyen duong n:", n);
	scanf("%u", &n);
	int i;
	for (i=1; i<=n; i++){
		sum+=i;
	}
	printf("Tong cac so tu 1 den %u la: %u", n, sum);
	return 0;
}
