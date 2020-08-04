#include<stdio.h>
void main(){
	int n,r=1,j,val=1;
	printf("enter number:");
	scanf("%d",&n);
	while(r<=n){
		val=1;
		for(j=1;j<=n;j++)
			printf("%d ",val++);
		printf("\n");
		n--;
	}
}

/*
 o/p

 enter number:4
1 2 3 4
1 2 3
1 2
1
