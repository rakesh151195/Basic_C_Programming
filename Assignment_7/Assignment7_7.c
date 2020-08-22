/* 7. Accept one numbers from user and display below pattern as.
Input : 3
Output : 3###2##1#
*/

#include<stdio.h>

void DisplayPattern(int);

void DisplayPattern(int num) {

	while(num != 0) {
	
		printf("%d",num);
		for(int count=1;count <= num; count++) {

			printf("#");
		}		

	num--;
	}
}

void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	DisplayPattern(num);
}
