//Danh gia diem.
#include<stdio.h>
int main(){
	int x;
	printf("so diem: ", x);
	scanf("%f", &x);
	if(x>=9 || x<=10){
		printf("Xuat sac");
	} else if(x>=8){
		printf("Gioi");
	} else if(x>=6.5){
		printf("Kha");
	} else if (x>=5){
		printf("Trung binh");
	} else{
		printf("Yeu");
	}
	return 0;
}
