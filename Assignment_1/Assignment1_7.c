/* 6. Accept one number from user and print that number of * on screen. */

#include<stdio.h>

void Display();

void main() {
	int num;
	
	printf("enter number.:");
	scanf("%d",&num);
	
	Display(num);
}

void Display(int num) {
	int count = 0;
	
	while( num > count) {
		printf("*");
	count++;
	}
}
