/* 3. Write a program which accept 10 numbers from user and return addition of even numbers from them.

INPUT : 1 2 3 4 5 6
OUTPUT: 12

*/

#include<stdio.h>
#include<malloc.h>

void AddEvenNum(int[],int);

void AddEvenNum(int arr[],int num) {

	int count,sum=0;

	for(count = 0; count < num; count++) {

		if(arr[count] % 2 == 0) {

			sum += arr[count];
		}
	}
	printf("Addition of even number is %d\n",sum);

}

void main() {

	int num,*arr=NULL,count;

	printf("How Many Number:");
	scanf("%d",&num);
	
	arr = (int *)malloc(num * sizeof(int));
	
	for(count = 0; count < num; count++) {

		printf("Enter Element %d: ",count);
		scanf("%d",&arr[count]);
	}

	AddEvenNum(arr,num);
}
