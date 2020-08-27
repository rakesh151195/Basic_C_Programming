 
/* 9. Write a program which accept 5 numbers from user and return smallest number from them. 

INPUT : 342 234 323 2 34
OUTPUT: 2


*/

#include<stdio.h>
#include<malloc.h>

void MaxDigit(int[],int);

void MaxDigit(int arr[],int num) {

	int count=0,max=0;

	for(count = 0; count < num; count++) {

		if(arr[count] < max) {
				
			max = arr[count];
		}
	}

	printf("Max :%d\n",max);
}


void main() {

	int *arr=NULL,num,count;

	printf("How Many Number:");
	scanf("%d",&num);

	arr = (int *)malloc(num * sizeof(int));
	
	for(count = 0; count < num; count++) {
	
		printf("Enter %d number: ",count);
		scanf("%d",&arr[count]);
	}

	MaxDigit(arr,num);

}
