/* 8. Accept one character from user and convert case of that character.
Input : A
Output : a
Input : D
Output : d */

#include<stdio.h>

void ConvertCase(char *);

void ConvertCase(char *ch) {

	if((*ch >= 'A') && (*ch <= 'Z')) {
	
		*ch = *ch + 32;
	}
	else if((*ch >= 'a') && (*ch <= 'z')) {
		
		*ch = *ch - 32;
	}

	printf("After convert : %c \n",*ch);
}

void main(){

	char ch = '\0';

	printf("Enter character.:");
	scanf("%c",&ch);

	ConvertCase(&ch);

}
