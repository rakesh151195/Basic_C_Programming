/* 1.Write a program which accept one number from user and return smallest digit.
Input : 712
Output : 1
Input : 7520
Output : 0 */

#include<stdio.h>

void SmallestDigit(int);

void SmallestDigit(int num) {
	
	int digit,min=0;
	int ans = num;

	min = 9;
	while(num != 0) {
		
		digit = num % 10;
		if(digit < min) {
	
			min = digit;	
		}
		num = num / 10;

	}//while
	printf("Smallest Number %d  is  %d\n",ans,min);

}//function

void main() {
	
	int num;

	printf("Enter number:");
	scanf("%d",&num);

	SmallestDigit(num);

}
