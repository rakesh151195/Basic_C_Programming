/* Program to print number 5 to 1 
	using while loop
*/

#include<stdio.h>

void display(int);

int main() {
	int no=5;

	display(no);

}

void  display(int no) {

	int temp=no;
	
	while(temp!=0) {
	
	printf("%d ",temp);
	 temp -= 1;
	} 
}
