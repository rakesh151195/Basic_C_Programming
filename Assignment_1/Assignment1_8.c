/* 8. Accept one character from user and display that character on screen. */

#include<stdio.h>

void display(char);

void main() {
	char ch;

	printf("enter the  character.:");
	scanf("%c",&ch);

	display(ch);
}

void display(char ch) {
	printf("given character is.:%c\n",ch);
}
