/* 5. Accept two characters from user and swap contents of that two characters.
 */

#include<stdio.h>

void swap(char*, char*);

void swap(char *char1,char *char2) {

	char temp;

	temp = *char1;
	*char1 = *char2;
	*char2 = temp;

	printf("after swap :char1= %c\t char2= %c",*char1,*char2);
}

void main() {

	char char1,char2;
	
	printf("enter char.:");
	scanf("%c\t",&char1);
	scanf("%c",&char2);
	
	printf("\nbefore swap :char1= %c\t char2= %c",char1,char2);
	printf("\n");

	swap(&char1,&char2); 
	
}
