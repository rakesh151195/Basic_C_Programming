/* 2. Write a program which accept 10 numbers from user and display in reverse order.

How Many Number:4
INPUT :5 6 3 4 
OUTPUT:4 3 6 5 

*/

#include<stdio.h>
#include<malloc.h>

void DisplayReverse(int[],int);

void DisplayReverse(int arr[],int num) {

	int count;
	
	for(count = (num - 1); count >= 0; count--) {

		printf("%d ",arr[count]);
	}

}

void main() {

	int num,*arr=NULL,count;

	printf("How Many Number:");
	scanf("%d",&num);

	arr = (int *)malloc(num * sizeof(int));
	
	for(count = 0; count < num; count++) {

		printf("Enter %d number:",count);
		scanf("%d",&arr[count]);
	}

	DisplayReverse(arr,num);
}
