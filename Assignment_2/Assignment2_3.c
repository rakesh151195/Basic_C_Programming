/* 3. Write a program which accept two numbers from user and display its common factors. */

#include<stdio.h>

void DisplayCommonFactor(int,int);

void main() {

	int num1,num2;

	printf("enter first number..:");
	scanf("%d",&num1);
	printf("enter second number..:");
	scanf("%d",&num2);
	
	DisplayCommonFactor(num1,num2);
}

void DisplayCommonFactor(int num1,int num2) {
	
	int num=0,count=2;

	if( num1 < num2 ){
		
		num = num1;
	}
	else {
		num = num2;
	}//else
	
	while(count <= num){	
		if(((num1 % count) == 0) && ((num2 % count ) == 0)) {
			
			printf("%d ",count);			

		}//if
	count++;
			
	}//while

}//function
