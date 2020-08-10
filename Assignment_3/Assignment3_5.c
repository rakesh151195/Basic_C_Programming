/* 5. Accept radius from user and return circumference of circle. */

#include<stdio.h>

#define PI 3.14;

float Circumference(float);

float Circumference(float radius) {

	float ans=0.0;

	ans =radius * 2 * PI;

	return ans;
}

float main() {

	int radius;
	float result=0.0;
	
	printf("Enter radius:");
	scanf("%d",&radius);

	result = Circumference(radius);

	printf("circumference of circle is :%f\n ",result);

	return 0;

}
