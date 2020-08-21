/* 4. Accept number from user and check whether it is Armstrong number or not. Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits is same as the given number.
Input : 153
Output : TRUE
*/

#include<stdio.h>


int ArmstrongNum(int);

int ArmstrongNum(int num) {

	int digit,temp,add = 0,sum;

	temp = num;

	while(temp != 0) {
		
		digit = temp % 10;
		
		sum = digit * digit * digit;
		add = add + sum;

		temp = temp / 10;
	} 

	return add;

}

int main() {

	int num,ans;

	printf("Enter number:");
	scanf("%d",&num);
	
	ans=ArmstrongNum(num);

	if(ans == num) {

		printf("\nTRUE\n");
	}
	else {
		
		printf("\nFALSE\n");
	}

}
