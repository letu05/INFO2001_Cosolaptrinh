#include<stdio.h>
int main(){
	int x1,x2,y1,y2;
	printf("(x1, y1), (x2, y2) (-10^6<=xi,yi<=10^6):", x1, y1, x2, y2);
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	float A=sqrt(pow(x2-x1,2)+pow(y2-y1, 2));
	printf("Khoang cach: %.2f", A);
	return 0;
}
