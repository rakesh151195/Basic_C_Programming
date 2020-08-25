/* 6. Write a program which accept 8 numbers from user and print number of digits of each number. */

#include<stdio.h>
#include<malloc.h>

int CountDigit(int);

int Display(int[],int);

int CountDigit(int num1) {
	
	int digit,temp,count=0;

	temp=num1;

	while(temp != 0) {
	
		temp = temp / 10;
		count++;
	
	}
	return count;

}

int Display(int arr[],int num) {

	int i = 0, count1 = 0;

	printf("\n");
  
	 for(i = 0; i < num; i++) {

		 count1 = CountDigit(arr[i]);

		printf("\nDIGITS IN NUMBER %d IS : %d\n", arr[i],count1);
    }

}

int main() {

	int num,*arr=NULL,count;

	printf("How Many Number:");
	scanf("%d",&num);

	arr = (int *)malloc(num * sizeof(int));

	printf("\nEnter The Element:\n\n");
	
	for(count = 0; count < num; count++) {
	
		printf("Enter number:");
		scanf("%d",&arr[count]);
	}

	Display(arr,num);

	return 0;
}


