/* calculate the factorial of a number entered by the user 
I/P : 5
O/P : 120
*/

#include<stdio.h>

void factorial();

void factorial(int n) {

	int fact=1,i=1;
	while(i<=n) {
		
		fact=fact * i;
		i = i + 1;
	}
	
	printf("%d",fact);
}
void main() {
	
	int n;
	
	printf("enter the number :");
	scanf("%d",&n);

	factorial(n);
}
