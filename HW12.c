#include<stdio.h>
int main(){
	int t,n;
	printf("Thang, Nam:", t, n);
	scanf("%d %d", &t, &n);
	int a(int t, int n){
	if(t,n <=0 ||t<1 & t>12){
		printf("INVALID");
	} else{
		printf("%d\n", a);
	}
	switch (a){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			a=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			a=30;
			break;
		case 2:
			if(n % 400 == 0 || n % 4 == 0 & n % 100 != 0){
				a=29;
			} else{
				a=28;
			}
			break;
		default:
			a= -1;
			break;
		}
	return 0;
}
