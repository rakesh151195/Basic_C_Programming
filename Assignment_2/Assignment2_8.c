/* 8. Accept one number and print that number of elements from Fibonacci series.
Input : 9
Output : 1 1 2 3 5 8 13 21 34 */

#include<stdio.h>

//void Fact();

int Fact(int num) {
	
	int count1=0,count2=1,fact=1;
	
	//fact = count1 + count2;
	printf("%d ",fact);
	for(int i=1; i<num; i++) {
		
		printf("%d ",fact);
		count1 = count2;
		count2 = fact;
		fact = count1 + count2;
	}
}


int main() {
	
	int num;

	printf("Enter number.:");
	scanf("%d",&num);
	
	Fact(num);
	
}
