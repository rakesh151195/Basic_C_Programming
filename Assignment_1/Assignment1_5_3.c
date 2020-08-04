/* Pattern printing 

*/


#include<stdio.h>

void main(){
	int i,r=1,n,val;

	printf("enter number:");
	scanf("%d",&n);

	while(r<=n){
		val=1;
		for(i=1;i<=r;i++)
			printf("%d ",val++);
	printf("\n");
	r++;
	}
}
/*
 o/p

 enter number:4
1
1 2
1 2 3
1 2 3 4
