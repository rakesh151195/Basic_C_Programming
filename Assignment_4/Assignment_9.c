/* 2. Write a program which accept one number from user and return addition of its odd digits. 

INPUT = 1234
OUTPUT = 4

*/


#include<stdio.h>

void EvenAddition(int);

void EvenAddition(int num) {

	int digit,sum;
	
	while(num != 0) {
	
		digit= num % 10;
		num = num / 10;
		if(digit % 2 != 0 ) {
			sum = sum + digit;
		}
	}		

		printf("Addition of odd digit is %d\n",sum);
}

void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	EvenAddition(num);

}
