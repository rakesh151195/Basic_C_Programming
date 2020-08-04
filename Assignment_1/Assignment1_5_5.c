/* Pattern printing 

*/

#include<stdio.h>

void main(){
	int r=1,n,j;

	printf("enter number:");
	scanf("%d",&n);

	while(r<=n){
		for(j=1;j<=n;j++)
			printf("* ");
		printf("\n");
		n--;
	}
}
/*
 o/p

 enter number:4
* * * *
* * *
* *
*

