/* 6. Accept distance in centimetre and convert into meter.
1 meter = 100 Centimeter
Input : 87
Output : 0.87
*/

#include<stdio.h>

float ConvertToMeter(float);

float ConvertToMeter(float num) {

	float meter=0.0;
	
	meter = num / 100;

	return meter;

}

int main() {

	float num=0.0,ans=0.0;

	printf("Enter Centimeter:");
	scanf("%f",&num);
	
	ans=ConvertToMeter(num);

	printf("Meter :%.2f",ans);

	return 0;

}
