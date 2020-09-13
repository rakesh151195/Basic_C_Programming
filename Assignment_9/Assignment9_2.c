/* 2. Write a program which accept N number from user and replace each even number with 0 and odd number with 1.

INPUT : 8 => 1 2 3 4 5 6 7 8
OUTPUT: 1 0 1 0 1 0 1 0

*/

#include<stdio.h>
#include<malloc.h>

int Replace(int ,int []);

int Replace(int num,int arr[]){

	int count;

	for(count = 0; count < num; count++) {

		if(arr[count] % 2 == 0 ) {
			
			arr[count]=0;
		}
		else{	
			arr[count]=1;
		}
	}
	
}

void main() {

	int num,count,*arr=NULL;

	printf("How Many Number You Want:");
	scanf("%d",&num);

	arr=(int *)malloc(num * sizeof(int));

	for(count = 0; count < num; count++) {
		
		printf("enter %d number:",count);
		scanf("%d",&arr[count]);
	}
	
	Replace(num,arr);

	for(count = 0; count < num; count++) {
		
		printf("After Replacement element:%d\n",arr[count]);
	}
}
