/* 7. Accept range from user and display below output.
Input : 5 12
Output : 5 6 7 8 9 10 11 12
*/

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
