/* 3. Write a program which accept number of hours and calculate number of minutes.
Input : 5
Output : 300
*/

#include<stdio.h>

int HrToMin(int);

int HrToMin(int hr) {

	int ans=0;

	ans = hr * 60;

	return ans;

}


int main() {

	int hr,ans;

	printf("Enter Hour:");
	scanf("%d",&hr);

	ans = HrToMin(hr);

	printf("Hour %d : min %d",hr,ans);
	
	return 0;

}
