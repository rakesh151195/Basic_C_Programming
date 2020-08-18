/* 10. Write a program which accept one number from user addition of factorial of each digit of that number.
Input : 324
Output : 32 (3! + 2! + 4!)
Input : 524
Output : 146 (5! + 2! + 4!)
*/

#include<stdio.h>

void Factorial(int num) {

	int temp,digit,temp1,sum=0;
	
	temp = num;

	while(temp!=0) {

		digit= temp % 10;
		temp1 = 1;
		for(int count = 1; count <= digit; count++) {
		
			temp1 = temp1 * count;
		}
			sum = sum + temp1;  
			temp = temp / 10;

	}
		printf("%d",sum);

}


void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	Factorial(num);
}
