/* 8. Accept three numbers from user and return difference between
largest and smallest digit.
Input : 543
Output : 2 (5 - 3)
Input : 7309
Output : 7 (9 - 3)
Input : 7319
Output : 8 (9 - 1)
*/


#include<stdio.h>

int Difference(int);

int Difference(int num) {

	int min=9,max=0,digit,diff;
	
	while(num != 0) {
		
		digit = num % 10;
		
		if(max < digit) {
			
			max = digit;
		}
		if(min > digit) {

			min =digit;
		}
		num = num / 10;

	}
		diff = max - min;
		printf(" Max Digit :%d \n min Digit :%d\n Difference :%d ",max,min,diff);
}

void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	Difference(num);
}
