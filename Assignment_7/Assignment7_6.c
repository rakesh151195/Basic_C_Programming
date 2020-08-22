/* 6. Accept range from user and perform addition of all elements form that range.
Input : 2 5
Output : 14
*/

#include<stdio.h>

void SumRange(int,int);

void SumRange(int start,int end) {

	int count,sum=0;

	for(count = start; count <= end; count++) {
	
		sum = sum + count;

	}
	printf("Sum of  range from %d to %d is : %d",start,end,sum);
}

void main() {
	
	int start,end;
	
	printf("Starting number:");
	scanf("%d",&start);
	printf("end number :");
	scanf("%d",&end);
	
	SumRange(start,end);

}
