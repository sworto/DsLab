#include<stdio.h>
int calculate(int a,int b){
	return a+b;
}
int main(){
	int c= calculate(6,9);
	printf("The sum of 6+9 is %d \n",c);
	return 0;
}
