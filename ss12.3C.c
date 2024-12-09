#include <stdio.h>
int factorial(int n){
	int result = 1;
    for (int i = 1; i <= n; i++){
    	result *= i;
    }
	printf("Giai thua cua %d la: %d \n",n,result);
}
int main(){
	int num;
	printf("Moi ban nhap vao mot so: \n");
	scanf("%d",&num);
	factorial(num);
	return 0;
}
