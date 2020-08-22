/* 8. Accept one character from user and depends on that character display its type.
Input : A
Output : It is Capital
Input : d
Output : It is Small
Input : 5
Output : It is Digit
*/

#include<stdio.h>

void CharType(char);

void CharType(char ch) {


	if((ch >= 'A') && (ch <= 'Z')) {
		
		printf("you enter  Capital character\n");
	}
	else if((ch >= 'a') && (ch <= 'z')) {
      
		printf("you enter Small character\n");
	}
	else if((ch >= '0') && (ch <= '9')) {
     
		printf("you enter a NUMBER\n");
	}
  
}

void main() {

	char ch;

	printf("enrter character:");
	scanf("%c",&ch);

	CharType(ch);
}
