/* 10. Write a program which accept length of three sides of triangle and check whether it is Pythagorean triple or not.
Input : 3 4 5
Output : TRUE
Input : 9 2 8
Output : FALSE
*/

#include<stdio.h>

#define false 1
#define true 0

int PythaTriple(int,int,int);

int PythaTriple(int a,int b,int c) {

	int sideC,b1;
	int flag = false;

	sideC = c * c;
	b1 = (a * a) + (b * b);

	if( sideC == b1) {

		flag = true;
	}
	
	return flag;

}//function


int main() {

	int a,b,c,ans;

	printf("Enter the side A:");
	scanf("%d",&a);
	printf("Enter the side B:");
	scanf("%d",&b);
	printf("Enter the side C:");
	scanf("%d",&c);

	ans=PythaTriple(a,b,c);

	if(ans == 1) {

		printf("False\n");
	}//if
	else {

		printf("True\n");
	}
	
	return 0;
}
