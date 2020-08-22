/* 5. Accept one numbers from user and display frequency of each digit.
Input : 543457
Output : 3 -> 1
4 -> 2
5 -> 2
7 -> 1
*/

#include<stdio.h>

void DigitCount(int);

void DigitCount(int num) {
	
	int digit,temp,arr[10]={0},count;

	temp = num;

	while(temp != 0) {

		arr[(temp % 10)]++;
		temp = temp / 10;

	}
	
	 for(count = 0; count <= 9; count++) {
     
		 if(arr[count] != 0) {
	  		
			 printf("\n%d OCCURS %d TIMES\n", count,arr[count]);
	}
    }
}



void main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	DigitCount(num);

}
