/* 5. Accept N numbers from user and reverse the contents of that array.

input : 5 : 1 2 3 4 5
Output: 5 4 3 2 1

 */

#include<stdio.h>
#include<malloc.h>


int Display(int [],int);

int Display(int *arr,int num) {

	int count;

	for(count = num-1; count >= 0; count--) {

		printf("%d ",arr[count]);
	
	}

}


void main() {

	int num,no,*arr=NULL,count;

	printf("How Many Number:");
	scanf("%d",&num);
	
	arr=(int *)malloc(num * sizeof(int));

	for(count = 0; count < num; count++) {

		printf("Enter %d Number:",count);
		scanf("%d",&arr[count]);
	}

	Display(arr,num);

}
