/* 2. Write a program which accept number from user and print factors of that number. 
*/

#include<stdio.h>

void display();

void main() {

	int num;
	
	printf("enter number..:");
	scanf("%d",&num);

	display(num);

}

void display(int num) {

	int count=1,i;

	while(count<=num) {
		if(num % count == 0) {
			printf("%d ",count);
		}
	count++;
	}
}
