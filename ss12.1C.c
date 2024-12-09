#include<stdio.h>
int tinhTong(){
	int a=5;
	int b=6;
	printf("tong cua %d va %d la %d \n",a,b,a+b);
	return a+b;
}
int sum(int a, int b){
	printf("tong cua %d va %d la %d \n",a,b,a+b);
	return a+b;
}
int main(){
	tinhTong();
}
