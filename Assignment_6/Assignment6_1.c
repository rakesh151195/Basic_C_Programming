/* 1.Rent of car is 15 rupees per kilometre for first 120 kilometres and after that it is 10 rupees per kilometre. Accept total number of kilometres and calculate rent.
Input : 80
Output : 1200
Input : 145
Output : 2050
*/

#include<stdio.h>

int RentOfCar(int);

int RentOfCar(int km) {
	
	int ans,result;

	if( km <= 120 ) {

		result = 15 * km;
	}
	else {
		
		ans = km - 120;
		result = (120 * 15) + (ans * 10); 
	}
	return result;

}


int main() {

	int km,rent;

	printf("Enter Kilometer :");
	scanf("%d",&km);

	rent= RentOfCar(km);

	printf("Rent of Car is :%d",rent);

	return 0;

}
