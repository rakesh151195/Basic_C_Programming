/* Pattern printing 

*/

#include<stdio.h>

void main(){
	int n,i,j,r=1,val;

	printf("enter number:");
	scanf("%d",&n);

		while(r<=n){
			val=r;

			for(j=1;j<=n-r;j++)
				printf("\t");

			for(j=1;j<=2*r-1;j++)
				if(j<=(2*r-1)/2)
					printf("%d \t",val++);
				else if(j==(2*r-1)/2+1)
					printf("%d \t",val);
				else
					printf("%d \t",--val);

			printf("\n");
			r++;

		}
}

/*
 * o/p
 enter number:4
			1 	
		2 	3 	2 	
	3 	4 	5 	4 	3 	
4 	5 	6 	7 	6 	5 	4 	
 


   */
