 
/* 1.Write a program which accept one number from user and return multiplication of its digits. (If number contains 0 then ignore that 0) 

Input : 1234
Output: 24

*/

#include<stdio.h>

int MultDigit(int);

int MultDigit(int num) {

	int digit,ans=1;
	int disp=num;
	
	while(num != 0) {
	
		digit = num % 10;
		num = num / 10;
		ans = ans * digit;
	}	
		printf("multiplication of digit %d is %d\n",disp,ans);

}

int main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	MultDigit(num);

}
