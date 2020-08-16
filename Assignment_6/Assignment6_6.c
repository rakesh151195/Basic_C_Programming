/* 6. Accept numbered one character from user and display below
pattern as.
Input : 5 M
Output : M M M M M
*/

#include<stdio.h>

void DisplayPattern(int,char);

void DisplayPattern(int num,char ch) {
	
	while(num != 0) {

		printf("%c ",ch);
	num--;
	}

}

void main() {

	int num;
	char ch='\0';

	printf("Enter Number:");
	scanf("%d",&num);
	printf("Enter Character:");
	scanf("%c",&ch);

	DisplayPattern(num,ch);

}
