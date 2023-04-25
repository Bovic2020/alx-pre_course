#include<stdio.h>
int main(void)
{
	int a = 100;
	int b = 200;
	int c = a;
	int d = b;
		switch(a)
		{
		case 'c':
		printf("this is part of thr outer switch\n",c);
		switch(b)
			{
			case 'd':
			printf("This part of the inner switch\n", d);
			}
		}
		printf("Exact value of a is : %d\n", a);
		printf("Exacr value of b is : %d\n", b);
	return (0);
}
