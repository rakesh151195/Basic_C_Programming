/* 7. Accept one numbers from user and count digits which are greater than 5. 

INPUT  = 1239764532
OUTPUT = 3

*/

#include<stdio.h>

void Display(int);

void Display(int num) {

	int rem,count=0;

	while(num != 0) {
		
		rem = num % 10;
		num = num / 10;
		if(rem > 5)
			count++;

	}
	printf("Digit Greater than 5 is %d\n",count);

}


void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	Display(num);

}
