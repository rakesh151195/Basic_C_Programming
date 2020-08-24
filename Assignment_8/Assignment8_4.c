/* 4. Write a program which accept 5 floats from user and display all such numbers which are greater than 8.9 

How many number: 5
INPUT : 4.5 7.56 9.56 8.99 5.6
OUTPUT: 9.56 8.99

*/



#include<stdio.h>
#include<malloc.h>

#define fixnum 8.9

void ChackNum(float[],float);

void CheckNum(float arr[],float num) {

	int count;

	for(count = 0; count < num; count++) {
	
		if(arr[count] > fixnum) {
			
			printf("%.2f ",arr[count]);
		}
	}

}

void main() {

	int num,count;
	float *arr=NULL;

	printf("How many number:");
	scanf("%d",&num);
	
	printf("Enter float value\n");
	
	arr = (float *)malloc(num * sizeof(float));

	for(count = 0; count < num; count++) {
	
		printf("Enter element:");
		scanf("%f",&arr[count]);
	}
		CheckNum(arr,num);
}
