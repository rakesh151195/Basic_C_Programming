/* 4. Write a program which accept two numbers from user and display its largest common factors. 
*/

#include<stdio.h>

void display(int,int);

void main() {
	
	int num1,num2;

	printf("enter number1 ..:");
	scanf("%d",&num1);
	printf("enter number2 ..:");
	scanf("%d",&num2);

	display(num1,num2);
}

void display(int num1,int num2) {
	
	int num,count=2,ans;

	if(num1 < num2) {
		
		num = num1;
	}
	else {
	
		num = num2;
	}

	while(num > count) {
			
		if(((num1 % count) == 0) && ((num2 % count) == 0)) {
			
			ans=count;	
		}//if
	count++;
	}//while
	printf("Max common factor :%d\n",ans);

}
