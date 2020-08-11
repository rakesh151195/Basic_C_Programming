/* 10. Accept range from user and print all numbers between that range in
reverse order.
Input : 10 17
Output :17 16 15 14 13 12 11 10 */

#include<stdio.h>

void range(int,int);

void range(int num1,int num2) {

	for(int count = num2; count >= num1; count--) {

		printf("%d ",count);
	}
	printf("\n");

}

void main() {
	
	int num1,num2;
	
	printf("Start number:");
	scanf("%d",&num1);
	printf("End number:");
	scanf("%d",&num2);

	range(num1,num2);

}
