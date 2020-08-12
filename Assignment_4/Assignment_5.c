/* 5. Accept one numbers from user and return its reverse number.
Input : 543
Output : 345 */

#include<stdio.h>

void ReverseDigit(int);

void ReverseDigit(int num) {
	
	int digit;
	
	while(num != 0) {
		
		digit = num % 10;
		printf("%d",digit);
		num = num / 10;

	}//while
	printf("\n");

}//function

void main() {
	
	int num;

	printf("Enter number:");
	scanf("%d",&num);

	ReverseDigit(num);

}

