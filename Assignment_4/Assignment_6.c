/* 4. Write a program which accept one number from user and return the occurrence of digit 0. 

INPUT = 120403004 
OUTPUT = 4

*/

#include<stdio.h>

void OccuranceOfDigit(int);

void OccuranceOfDigit(int num) {
	
	int digit,count=0,temp;

	while(num != 0) {
	
		digit = num % 10;
		num = num / 10 ;
		
		if(digit == 0) {

			count=count + 1;
		}//if
	}//while
	printf("Occurance number 0 is %d",count);
}//function

void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	OccuranceOfDigit(num);

}
