/* 6. Accept two integers from user and swap contents of that two integers without using temporary variable. 
*/

#include<stdio.h>

void swap();

void swap(int *num1,int *num2) {

	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;

	printf("after swapping :num1= %d\t num2= %d\n",*num1,*num2);
}

void main() {

	int num1=0;
	int num2=0;
	
	printf("enter number1:");
	scanf("%d",&num1);
	printf("enter char2.:");
	scanf("%d",&num2);
	printf("\nbefore swapping :num1= %d\t num2= %d",num1,num2);
	printf("\n");

	swap(&num1, &num2); 
	
}
