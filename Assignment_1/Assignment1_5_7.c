#include<stdio.h>
void main(){
	int j,r=1,n;
	printf("enter number:");
	scanf("%d",&n);
	while(r<=n){
		for(j=1;j<=n-r;j++)
			printf("\t");
		for(j=1;j<=2*r-1;j++)
			printf("\t*");
		printf("\n");
		r++;
	}
}
/*
 o/p

 enter number:4
				*
			*	*	*
		*	*	*	*	*
	*	*	*	*	*	*	*

