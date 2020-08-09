/* 9. Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not. */

#include<stdio.h>  

int ChackVowel(char *);

int ChackVowel(char *ch) {

	int ans = 0;
  	
	if((*ch == 'A') || (*ch == 'E') || (*ch == 'I') || (*ch == 'O') || (*ch == 'U') ||
	   (*ch == 'a') || (*ch == 'e') || (*ch == 'i') || (*ch == 'o') || (*ch == 'u'))
    	{
     		 ans = 1;
	 }
	return ans;
}

int main() {

	char ch;
	int result=0;
	
	printf("enter character .:");
	scanf("%c",&ch);
	
	result = ChackVowel(&ch);

	if(result == 1) {
	
		printf("VOWEL\n");
	}
	else {
		printf("NOT VOWEL\n");
	 }

}
