/* 7. Accept radius of circle from user and calculate its circumference (2*PI*R).
Input : 4.2
Output : 26.39
*/

#include<stdio.h>

#define PI 3.14

float Circumference(float);

float Circumference(float radius) {

	float result;

	result = 2 * PI * radius;

	return result;

}

int main() {

	float radius=0.0,ans=0.0;

	printf("Enter radius:");
	scanf("%f",&radius);
	
	ans=Circumference(radius);

	printf("area of circle :%.2f",ans);

	return 0;

}
