/* Pattern printing 

*/

#include<stdio.h>

void main(){
	int j,n,r=1;

	printf("enter number:");
	scanf("%d",&n);

	while(r<=n){

		for(j=1;j<=r;j++)
			printf("* ");
		printf("\n");
		r++;
	}
}

/*
 
  o/p
 
  enter number:4
*
* *
* * *
* * * *

