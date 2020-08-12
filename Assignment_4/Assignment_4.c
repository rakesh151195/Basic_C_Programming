/* 4. Write a program which accept one number from user and return the occurrence of digit 5. 

INPUT = 345567545
OUTPUT = 5

*/

#include<stdio.h>

void OccuranceOfDigit(int);

void OccuranceOfDigit(int num) {
	
	int digit,count=0,temp;

	while(num != 0) {
	
		digit = num % 10;
		num = num / 10 ;
		
		if(digit == 5) {

			count++;
		}//if
	}//while
	printf("Occurance number 5 is %d",count);
}//function

void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	OccuranceOfDigit(num);

}
