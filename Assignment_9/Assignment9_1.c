/* 1. Write a program which accept N number from user and increase by 1 if it is divisible by 3 and increase by 2 if it is divisible by 3 and 5. 

Input: 3 => 3 5 15
Output 5 => 4 5 17

*/

#include<stdio.h>
#include<malloc.h>

int Increment(int ,int []);

int Increment(int num,int arr[]){

	int count;

	for(count = 0; count < num; count++) {

		if(arr[count] % 3 == 0 && arr[count] % 5 == 0) {
			
			arr[count]=arr[count]+2;
		}
		else if((arr[count] % 3) == 0) {
			
			arr[count]=arr[count]+1;
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
	
	Increment(num,arr);

	for(count = 0; count < num; count++) {
		
		printf("After increment element:%d\n",arr[count]);
	}
}
