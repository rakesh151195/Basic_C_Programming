/* 3. Write a program which accept N numbers from user and return difference between summation of even numbers and summation of odd numbers. 

INPUT : 6 => 1 2 3 4 5 6
OUTPUT: evensum = 12; oddsum = 9

*/

#include<stdio.h>
#include<malloc.h>

int Summmation(int [],int);

int Summation(int arr[],int num) {

	int count,even=0,odd=0;

	for(count = 0; count < num; count++) {

		if(arr[count] % 2 == 0) {
		
			even += arr[count];
		}
		else{
			odd += arr[count];
		}
	}
	printf("\nsum of even number:%d",even);
	printf("\nsum of odd number:%d",odd);
}


void main() {

	int count,*arr=NULL,num;

	printf("How Many Number:");
	scanf("%d",&num);
	
	arr=(int *)malloc(num * sizeof(int));
	
	for(count = 0; count < num; count++) {

		printf("Enter %d number:",count);
		scanf("%d",&arr[count]);
	}

	Summation(arr,num);

}
