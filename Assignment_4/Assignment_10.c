 
/* 10. Write a program which accept one number from user and return difference between addition of its even digits and addition of odd digits. 

INPUT :  5324
OUTPUT : 2

*/

#include<stdio.h>

void Difference(int);

void Difference(int num) {

	int digit,sum=0,sum1=0,ans=0;
	
	while(num != 0) {
	
		digit= num % 10;
		num = num / 10;
		if(digit % 2 == 0 ) {
			sum = sum + digit;
		}
		else {
			sum1 = sum1 + digit;
		}
	}	

		ans = sum1 - sum;

		
		printf("Addition of even digit is %d\n",sum);
		printf("Addition of odd digit is %d\n",sum1);
		printf("Difference of even and odd digit is %d\n",ans);
}

void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	Difference(num);

}
