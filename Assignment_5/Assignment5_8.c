/* 8. Cost of land is 560 rupees per square feet. Accept number of square feet from user and calculate total cost.
Input : 87
Output : 48720
*/

#include<stdio.h>

#define cost 560

int SquareFeet(int);

int SquareFeet(int feet) {

	int result=0;

	result = feet * cost;

	return result;

}

int main() {

	int feet,ans;

	printf("Enter Number of Square feet:");
	scanf("%d",&feet);

	ans=SquareFeet(feet);

	printf("Cost of land is %d",ans);
	
	return 0;
}
