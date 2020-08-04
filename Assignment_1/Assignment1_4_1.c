/*  Accept one number and check whether is is divisible by 5 or not.
	without using flag
*/

#include<stdio.h>

void Display(int);

void main() {
	int num;

	printf("enter number.:");
	scanf("%d",&num);

	Display(num);

}

void Display(int num) {

	int temp=num;

	if((5%num)==0) {
			printf("Number %d is divisable by 5..:\n",temp);
		}
	else 
		{
			printf("Number %d is not divisible by 5.:\n",temp);
		}
}
