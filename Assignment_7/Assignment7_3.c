/* 3. Write a program which accept principle amount, time and rate of interest from user and calculate simple interest.
SimpleIntrest = PrincipleAmount * Time * RateOfIntrest / 100
*/

#include<stdio.h>

int SimpleInterest(int,int,int);

int SimpleInterest(int PM,int time,int RateInt) {

	int SI;

	SI = PM * time * ((float)RateInt/100);
	
	return SI;

}

int main() {

	int PM,time,RateInt;
	float si=0.0;

	printf("\nENTER THE PRINCIPLE AMOUNT : ");
	scanf("%d",&PM);
	printf("\nENTER THE TIME : ");
	scanf("%d", &time);
	printf("\nENTER RATE OF INTEREST : ");
	scanf("%d", &RateInt);

	si=SimpleInterest(PM,time,RateInt);

	printf("\nSIMPLE INTEREST :%.2f",si);

	return 0;
}
