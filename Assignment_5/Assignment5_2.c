/* 2. Accept number from user and print below pattern.
Input : 4
Output : * * * * # # # #
*/

#include<stdio.h>

int DisplayPattern(int);

int DisplayPattern(int num) {

	int count;

	for(count = 1; count <= (num * 2); count++) {

		if(count <= num) {
		
			printf("* ");
		}//if
		else {

			printf("# ");
		}
	
	}//for

}//function

int main() {

	int num;

	printf("Enter number:");
	scanf("%d",&num);

	DisplayPattern(num);
	
	return 0;
}
