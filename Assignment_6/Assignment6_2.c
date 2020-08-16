/* 2. Parking charges for four whaler is 30 rupees for first three hours and after every hour it is 5 rupees. Accept number of hours and calculate total amount.
Input : 2
Output : 30
Input : 7
Output : 50
*/

#include<stdio.h>

#define Rate 30
#define hour 3
#define extra 5

int CarParking(int);

int CarParking(int hr) {

	int result,ans;

	if(hr <= hour) {

		result = Rate;
	}
	else {
	
		ans = hr - hour;
		result = (ans * extra) + Rate;

	}
	
	return result;
}


int main() {

	int hr,ans;

	printf("Enter Hour:");
	scanf("%d",&hr);

	ans = CarParking(hr);

	printf("Total amount of Car parking is :%d",ans);

	return 0;

}
