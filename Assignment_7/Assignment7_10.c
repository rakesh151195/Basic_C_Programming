/* 10. Accept number from user and return its generic root.
Input : 7429
Output : 4 (7+4+2+9 -> 22 -> 2+2 -> 4 )
Input : 90281
Output : 2 (9+0+2+8+1 -> 20 -> 2+0 -> 2)
*/


#include<stdio.h>

void GenericRoot(int);

void GenericRoot(int num) {

	int temp,digit,sum=0;

	temp = num;

	while(temp != 0) {

		digit = temp % 10;
		sum = sum + digit;
		temp = temp / 10;
	
	}
	if(sum > 9 ) {

		GenericRoot(sum);
	}
	else {
		printf("%d\n",sum);
	}

}

void main() {

	int num;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	GenericRoot(num);

}	
