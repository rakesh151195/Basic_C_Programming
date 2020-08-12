/* 3. Accept one numbers from user and display the output as.

Input : 543
Output : Three Four Five */

#include<stdio.h>

void Display(int);

void Display(int num) {

	int digit;
	
	while(num != 0) {

		digit = num % 10 ;
		num = num / 10 ;

		switch(digit) {

		case 1:
            		printf("ONE ");
            		break;
		case 2:
			printf("TWO ");
			break;
		case 3:
			printf("THREE ");
			break;
		case 4:
			printf("FOUR ");
			break;
		case 5:
			printf("FIVE ");
			break;
		case 6:
			printf("six ");
			break;
		case 7:
			printf("SEVEN ");
			break;
		case 8:
			printf("EIGHT ");
			break;
		case 9:
			printf("NINE ");
			break;
		case 0:
			printf("ZERO ");
			break;
		}//switch
	}//while

}

void main() {
	
	int num;
	
	printf("Ente number:");
	scanf("%d",&num);

	Display(num);

}
