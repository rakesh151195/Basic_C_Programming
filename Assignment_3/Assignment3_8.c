/* 8. Accept range from user and print all even numbers between that range.
Input : 10 17
Output : 10 12 14 16  */

#include<stdio.h>

void EevnRange(int,int);

void EvenRange(int num1,int num2) {

	for(int count = num1; count <= num2; count++) {
		
		if(count %2 == 0) {
	
			printf("%d ",count);
		}
	}
	printf("\n");

}

void main() {
	
	int num1,num2;
	
	printf("Start number:");
	scanf("%d",&num1);
	printf("End number:");
	scanf("%d",&num2);

	EvenRange(num1,num2);

}
