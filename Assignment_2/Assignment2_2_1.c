/* 2. Write a program which accept number from user and print even factors of that number. 
*/

#include<stdio.h>

int display();

void main() {

	int num;
	
	printf("enter number..:");
	scanf("%d",&num);

	display(num);

}

int display(int num) {

	int count=1;
	
	if(num <= 0){
		printf("enter number < 0");
		return 0;	
	}

	while(count<=num) {
		if(num % count == 0) {
			if(count%2 ==0){
				printf("%d ",count);
			}
		}
	count++;
	}
}
