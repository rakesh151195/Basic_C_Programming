/* 7. Write a program which accept 5 numbers from user and print addition of digits of each number. 

INPUT : 76 99 34 23 2
OUTPUT: 13 18  7  5  2

*/


#include<stdio.h>
#include<malloc.h>

int Display(int[],int);
int DigitAdd(int);

int DigitAdd(int num) {

	int add=0,temp=0,digit;

	temp = num;

	while(temp != 0) {
		
		digit = temp % 10;
		add += digit;
		temp = temp / 10;
	}
	return add;
}

int Display(int arr[],int num) {

	int count=0,sum=0;

	for(count = 0; count < num; count++) {

		sum = DigitAdd(arr[count]);
		
		printf("Number is %d = %d \n",arr[count],sum);
	}
	
}

int main() {

	int *arr=NULL,num,count;

	printf("How Many Number:");
	scanf("%d",&num);
	
	arr = (int *)malloc(num * sizeof(int));

	for(count = 0; count < num; count++) {

		printf("Enter %d Number:",count);
		scanf("%d",&arr[count]);
	}

	Display(arr,num);

	return 0;
}
