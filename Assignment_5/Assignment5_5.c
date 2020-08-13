/* 5. Accept radius of circle from user and calculate its area (PI*R*R).
Input : 4.2
Output : 55.389595
*/

#include<stdio.h>

#define PI 3.14

float AreaOfCircle(float);

float AreaOfCircle(float num) {

	float result;

	result = num * num * PI;

	return result;

}

int main() {

	float num,ans=0.0;

	printf("Enter radius:");
	scanf("%f",&num);
	
	ans=AreaOfCircle(num);

	printf("area of circle :%f",ans);

	return 0;

}
