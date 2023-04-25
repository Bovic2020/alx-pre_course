#include<stdio.h>
int main(void)
{
	int a = 100; //local variable definition
	if ( a == 10)
	{
	printf("Value of a is 10\n"); //if the condition is true ,print the following
	}
	else if ( a ==100)
	{
	printf("Value of a is 100\n"); //if else if condition true print this statement
	}
	else if ( a == 30 )
	{
	printf("Value of a is 30\n"); /// if else if condition is true print this statement
	}
	else
	{
	printf("None of the value is equal to 100\n");
	}
	printf ("Value of a is : %d\n", a);
	return (0);
}
