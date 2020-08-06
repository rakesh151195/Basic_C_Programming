/* 6. Accept one number from user and print that number of * on screen. */

#include<stdio.h>

void Display();

void main() {
	
	int num;

	printf("enter number ..:");
	scanf("%d",&num);
	
	Display(num);
}

void Display(int num) {

	int count;
	
	while(num!=0) {
		printf("*");
		num--;
	}
	printf("\n");
}

/* o/p

enter number ..:6
******

*/
