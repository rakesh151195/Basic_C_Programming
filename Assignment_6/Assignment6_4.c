/* 4. Write a program which accept number of minutes and calculate number of hours.
Input : 320
Output : 5 hours 20 minutes
Input : 150
Output : 2 hours 30 minutes
*/

#include<stdio.h>

#define Minutes 60

int MinToHr(int);

int MinToHr(int min) {
	
	int hr,result;

	hr = min / Minutes;
	result = min - (hr * Minutes );

	
	printf(" %d Hours %d Minutes",hr,result);
}

int main() {

	int min;

	printf("Enter time in Minutes:");
	scanf("%d",&min);

	 MinToHr(min);

}
