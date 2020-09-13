/* 4. Write a program which accept N numbers from user and one number. Display all elements of array which are divisible by that number. 

INPUT : NUMBER:9 user Input:5
OUTPUT :25 5 10 2 3 45 56 10 2 : 25 5 10 45 10

*/

#include<stdio.h>
#include<malloc.h>

int Display(int [],int,int);

int Display(int *arr,int num,int no) {

	int count;

	for(count = 0; count < num; count++) {

		if(arr[count] % no == 0) {

			printf("\nGiven number:%d",arr[count]);
		}
	}

}


void main() {

	int num,no,*arr=NULL,count;

	printf("How Many Number:");
	scanf("%d",&num);
	
	printf("Enter Number:");
	scanf("%d",&no);
	
	arr=(int *)malloc(num * sizeof(int));

	for(count = 0; count < num; count++) {

		printf("Enter %d Number:",count);
		scanf("%d",&arr[count]);
	}

	Display(arr,num,no);

}
