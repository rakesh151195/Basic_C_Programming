/* 8. Accept three numbers from user and count occurrence of 0. 

INPUT : Enter the Number 1: 030405
	Enter the Number 2: 05060
	Enter the Number 3: 505050

OUTPUT :Occurance of zero is :9 

*/

#include<stdio.h>

void OccuranceOfZero(int []);

void OccuranceOfZero(int arr[]) {

	int digit,temp,ans=0;
	
	for(int count = 0 ; count <= 3 ; count++) {
		
		temp = arr[count];	
		while(temp != 0) {
			
			digit = temp % 10;
			temp = temp / 10;
			if( digit == 0) { 
			
				ans+= 1;
			}
		
		}//while
	
	}//for

	printf("Occurance of zero is :%d ",ans);
}//fuction


void main() {

	int arr[3],count;

	for(count = 0; count < 3; count++) {

		printf("Enter the Number %d: ",count + 1);
		scanf("%d",&arr[count]);

	}//for

	OccuranceOfZero(arr);


}//main
