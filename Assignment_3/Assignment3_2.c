/* 2. Write a program which accept principle amount, time and rate of
interest from user and calculate simple intrest.
SimpleIntrest = PrincipleAmount * Time * RateOfIntrest / 100 */

#include<stdio.h>

float SimpleInterest(int,int,float);

float SimpleInterest(int pa,int time,float rs) {
	
	float ans=0.0;

	ans = (pa * time) * (rs / 100);
	
	printf("result =%f",ans);
	
}

int main() {

	int pa,time,result;
	float rs;

	printf("Enter principle amount:");
	scanf("%d",&pa);
	printf("\nEnter time :");
	scanf("%d",&time);
	printf("\nEnter rate of interest:");
	scanf("%f",&rs);

	printf("\nSimple Interest of Amount %d for Time of %d Years is %f\n\n",pa,time,rs);
	
	result = SimpleInterest(pa,time,rs);
}
