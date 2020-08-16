/* 5. Accept number from user and display below pattern as.
Input : 5
Output : A A A A A
*/


#include<stdio.h>

void Display(int);

void Display(int num) {

	while(num != 0) {

		printf("A ");
	num--;
	}

}

void main() {
	
	int num;

	printf("Enter number:");
	scanf("%d",&num);

	Display(num);

}
