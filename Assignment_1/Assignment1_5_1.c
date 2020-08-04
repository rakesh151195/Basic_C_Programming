/* Pattern printing 

*/


#include<stdio.h>

void main(){
	int n,i,r=1,val=1;
	
	printf("enter number of rows:");
	scanf("%d",&n);
	
	while(r<=n){

		for(i=0;i<r;i++)
			printf("%d\t",val++);
		printf("\n");
		r++;
	}
}
/* o/p
 *
 * enter number of rows:4
1
2	3
4	5	6
7	8	9	10

*/
