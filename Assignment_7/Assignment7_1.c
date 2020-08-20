/* 1.Write a program which accept two numbers from user and calculate its power.
Input : 3 4
Output : 81
Input : 7 3
Output : 343
*/

#include<stdio.h>

void Power(int,int);

void Power(int num,int pow) {

	int ans=1;

	while(pow != 0) {

		ans = ans * num;
	pow--;
	}
	
	printf("%d\n",ans);
}

void main() {

	int num,pow;

	printf("Enter number:");
	scanf("%d",&num);
	printf("Enter POWER for %d :",num);
	scanf("%d",&pow);

	Power(num,pow);

}
