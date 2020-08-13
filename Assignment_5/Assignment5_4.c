 
/* 4. Accept length of side from user and calculate area of square.
Input :4.2
Output : 17.64
*/

#include<stdio.h>

float AreaOfSquare(float);

float AreaOfSquare(float num) {

	float area;
	
	area = num * num;

	return area;

}

int main() {

	float num,ans=0.0;

	printf("Enter length:");
	scanf("%f",&num);
	
	ans=AreaOfSquare(num);

	printf("area of Square :%.2f",ans);

	return 0;

}
