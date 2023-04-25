#include<stdio.h>
int main(void)
{
	int a = 10; //variable declaration
	/* do loop execution*/
	Dam:do
	{
		if (a ==15)
		{
		a = a + 1; /** skip iteraton*/
		goto Dam;
		}
		printf("Value of a :%d\n", a);
		a++;
	} while( a < 20);
return (0);
}
