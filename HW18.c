//In bang cuu chuong.
#include<stdio.h>
int main(){
	int x,y;
	printf("x = ", x);
	scanf("%d", &x);
	for (y = 2 ;y<= 9; y++){
		printf("%d * %d = %d\n", x, y, x*y);
	}
	return 0;
}
