#include<stdio.h>
int main(void)
{
	int a = 10; //variable declaration
	do //Do loop execution
	{
		if (a == 15)
		{
	/*Skip iteration*/
			a = a + 1;
			continue;
		}
		printf("Value of a : %d\n", a);
		a++;
	}while( a < 20);
return (0);
}
