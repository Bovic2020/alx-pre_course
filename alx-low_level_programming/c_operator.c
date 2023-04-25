#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	/*Variable declaration*/
	a = 21;
	b = 10;
	c = a + b;
	printf("Line 1-Valuue of c is : %d \n", c);
	c = a -b;
	printf("Line 2-Value of c is : %d \n", c);
	c = a * b;
	printf("Line 3-Valuse of c: %d \n", c);
	c = a / b;
	printf("Line 4-Valuse of c : %d \n", c);
	c = a % b;
	printf("Line 5-value of c is : %d \n", c);
	c = a++;
	printf("Line 6-Value of c is : %d \n", c);
	c = a--;
	printf("Line 7-Value of c is : %d \n", c);
}
