//Kiem tra nam nhuan.
#include<stdio.h>
int main(){
	int n;
	printf("n =", n);
	scanf("%d", &n);
	if(n<=0){
		printf("INVALID");
	} else if(n % 400 ==0 || n % 4 ==0 & n % 100 != 0){
		printf("YES");
	} else{
		printf("NO");
	}
	return 0;
}
