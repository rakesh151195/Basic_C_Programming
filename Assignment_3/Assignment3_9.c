/* 9. Accept range from user and addition of all numbers between that range.
Input : 10 15
Output : 75 */

#include<stdio.h>

void SumRange(int,int);

void SumRange(int num1,int num2) {
	
	int sum=0;
	
	for(int count = num1; count <= num2; count++) {
		
		sum = sum + count;
	}
	printf("%d\n",sum);

}

void main() {
	
	int num1,num2;
	
	printf("Start number:");
	scanf("%d",&num1);
	printf("End number:");
	scanf("%d",&num2);

	SumRange(num1,num2);

}
