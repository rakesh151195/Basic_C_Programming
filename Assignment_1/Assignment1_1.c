/* 1.program to divide 2
Input  :- 10 5
Output :- 2
*/

#include<stdio.h>

float display(int,int);

void main() {
	int num1,num2;
	float ans;

	printf("First number :");
	scanf("%d",&num1);
	printf("second number :");
	scanf("%d",&num2);

	ans=display(num1,num2);

	printf("Division of %d/%d = %f ",num1,num2,ans);
}

float  display(int num1,int num2) {
	float result=0;
	
	result=(float)num1/num2;
	
	return result;
}
