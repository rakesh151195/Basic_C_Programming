/* 1.Write a program which accept one number from user and print that number of even numbers on screen. 
*/

#include<stdio.h>

int display();

void main() {

	int num;

	printf("enter number.:");
	scanf("%d",&num);
	
	display(num);
}

int display(int num) {
	
	int count=0;
	
	if(num <= 0) {
		printf("enter the number < 0");
		return 0;
	}	

	while(count!=num) {
		printf("%d ",(count * 2));
		count++;
	}
	
}

