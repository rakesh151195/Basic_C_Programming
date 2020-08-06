/* 9. Accept one number and return that number by subtracting 5 from it. */

#include<stdio.h>

void display();

void main() {
	int num;

	printf("enter number.:");
	scanf("%d",&num);
	
	display(num);
}

void display(int num) {
	int ans;

	ans= num -5 ;
	printf("given number is.:%d",ans );
}
