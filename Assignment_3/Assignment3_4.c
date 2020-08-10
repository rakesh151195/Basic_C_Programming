/* 4. Accept three numbers from user and return its average. */

#include<stdio.h>

int Average(int,int,int);

int Average(int num1,int num2,int num3) {

	float ans=0.0;

	ans =(float) (num1 + num2+ num3) / 3;

	return ans;

}

int main() {

	int num1,num2,num3;
	float result=0.0;

	printf("First no:");
	scanf("%d",&num1);
	printf("Second no:");
	scanf("%d",&num2);
	printf("Third no:");
	scanf("%d",&num3);

	result = Average(num1,num2,num3);

	printf("Aversge of %d, %d and %d is %f \n",num1,num2,num3,result);

}
