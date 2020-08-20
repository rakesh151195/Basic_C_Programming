/* 2. Write a program which accept number from user and check whether that number is strong number or not. When the sum of the factorial of a number's individual digits are equal to the number itself, then that number is called a strong number.
Input : 145
Output : TRUE
since 1! + 4! + 5! = 1 + 24 + 120 = 145
*/


#include<stdio.h>

void SrtingNum(int);

void StrongNum(int num) {

	int digit,temp,sum=1,ans=0;

	temp = num;

	while(temp != 0) {
		sum=1;
		digit = temp % 10;
			
		for(int count = 1; count <= digit; count++) {

			sum = sum * count;
		}
		ans = ans + sum;
		temp = temp / 10;
	}
		if(ans == num) {

			printf("TRUE\n");
		}
		else {
			printf("FALSE\n");
		}
}

void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	StrongNum(num);

}
