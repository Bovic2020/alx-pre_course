#include<stdio.h>
/*fubction declaration*/
void func (void);
	static int count = 5; /*global variable*/
	int main ()
{
	while (count--)
	{
		func();
	}
	return (0);
}
/*new function declaration*/
void func (void)
{	
	static int i = 5; /*locat static variable*/
	i++;
	printf("i is %d and count is %d\n", i, count);
}
