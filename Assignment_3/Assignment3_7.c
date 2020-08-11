/* 7. Accept range from user and print all numbers between that range.
Input : 10 17
Output : 10 11 12 13 14 15 16 17 */

#include<stdio.h>

void range(int,int);

void range(int num1,int num2) {

	for(int count = num1; count <= num2; count++) {

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
