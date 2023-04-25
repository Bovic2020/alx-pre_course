#include<stdio.h>
int main(void)
{
/*local variable declaration*/
int a = 200;
int b = 200;
/*checking for boolean condition*/
if (a == b)
{
	//If the condition is true proceed to check the second expression
	if (b == 200)
	{
	printf("Value of a is 100 and b is 200\n");
	}
}
else
{
	printf("Value is not the same\n");
}
printf("Exact value of a : %d\n",a);
printf("Exact value of b : %d\n", b);
return (0);
}
