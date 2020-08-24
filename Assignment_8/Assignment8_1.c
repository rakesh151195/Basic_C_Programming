/* 1.Write a program which accept 10 numbers from user and display only even numbers from them.

INPUT : 1 2 3 4 5 6
OUTPUT: 2 4 6

*/

#include<stdio.h>
#include<malloc.h>

void DisplayEvent(int[],int);

void DisplayEvent(int arr[],int num) {

	int count;
	
	for(count = 0; count <= num; count++) {
	
		if(arr[count] % 2 == 0) {
			
			printf("%d ",arr[count]);
		}
	}

}


void main() {

	int num,count,*arr=NULL;

	printf("How many number:");
	scanf("%d",&num);

	arr = (int *)malloc(num * sizeof(int));
	
	for(count = 0; count < num; count++) {

		printf("Enter %d number:",count);
		scanf("%d",&arr[count]);
	}
	
	DisplayEvent(arr,num);

}
