 
/* 3. Write a program which accept two numbers from user and display its largest common factors.
Input : 12 18
Output : 6 */

#include<stdio.h>

int MaxFactor(int,int);

int MaxFactor(int num1,int num2) {

	int num,count,max;

	if(num1 < num2) {
		
		num = num1;
	}
	else if(num > num2) {
		
		num = num2;
	}
	
	for (count = 2; count <= (num/2); count++) {
	
		if(((num1 % count) == 0) && ((num2 % count) == 0)) {
		
			max = count;
		}
	}
	
	return max;
}

int main() {

	int num1,num2,ans=0;

	printf("Enter first number :");
	scanf("%d",&num1);
	printf("Enter second number.:");
	scanf("%d",&num2);
	
	ans = MaxFactor(num1,num2);

	printf("Largest common factor of %d and %d is %d\n",num1,num2,ans);
	
	return 0;
}
