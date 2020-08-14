/* 9. Accept length and width of rectangle and calculate its area (Length * Width).
Input : 4.2    8.9
Output : 37.38
*/


#include<stdio.h>

float AreaOfRectangle(float,float);

float AreaOfRectangle(float len,float wid) {

	float  result=0.0;

	result = len * wid;

	return result;
} 

int main() {

	float len = 0.0, wid = 0.0, ans = 0.0;

	printf("Enter length: ");
	scanf("%f",&len);
	printf("Enter width: ");
	scanf("%f",&wid);

	ans = AreaOfRectangle(len,wid);

	printf("Area of Rectangle: %.2f\n",ans);
	
	return 0;
}
