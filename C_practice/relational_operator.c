#include<stdio.h>
int main(void)
{
	int a;
	int b;
	int c;
	a = 21;
	b = 10;
	if (a == b)
	{
	printf("Line 1- a is equal b\n");
	}
	else
	{
	printf("Line 1- a is not equal b\n");
	}
	if (a < b)
	{
	printf("Line 2- a is less than b\n");
	}
	else
	{
	printf("Line 2- a is not less than b\n");
	}
	if (a > b)
	{
	printf("Line 3- a is greater than b\n");
	}
	else
	{
	printf("Line 3- a is not greater than b\n");
	}
/*Changing the value of a and b in the code block*/
	a = 5;
	b = 20;
	if (a <= b)
	{
	printf("Line 4 - a is either less than or equal to b\n");
	}
	if (b >= a)
	{
	printf("Line 5- b is either greater than or equal to a b\n");
	}
}
