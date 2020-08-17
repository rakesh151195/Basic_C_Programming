/* 9. Accept range from user and display below output.
Input : 5 20
Output : 6 8 10 12 14 16 18 20
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
