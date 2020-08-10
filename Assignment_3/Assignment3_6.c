/* 6. Accept number in decimal format and print its binary equivalent number.
Input : 11
Output : 1011 */

#include<stdio.h>

int Display(int);

int Display(int num) {
	
	int num1=0,digit=0;
	int arr[10];
	
	num1= num;
	
	while(num1 != 0) {
		
		digit = num1 % 2;
		printf("%d",digit);
		num1 = num1 / 2; 

	}

}

void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	Display(num);


}
