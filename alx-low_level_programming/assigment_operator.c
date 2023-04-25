#include<stdio.h>
int main(void)
{
	int a = 21;
	int c = 200;
	c = a;
		printf("Line 1- = Operator example, value of c : %d\n", c);
	c += a;
		printf("Line 2- += Operator example, value of c : %d\n", c);
	c -= a;
		printf("Line 3- -= Operator example, value of c : %d\n", c);
	c *= a;
		printf("Line 4- *= Operator example, value of c : %d\n", c);
	c /= a;
		printf("Line 5- /= Operator example, value of : %d\n", c);
	c %= a;
		printf("Line 6- %= Operator example, value of c : %d\n", c);
	c <<= 2;
		printf("Line 7- << Operator example , Value of c : %d\n", c);
	c >>= 2;
		printf("Line 8- >> Operator example, value of c : %d\n", c);
	c &= 2;
		printf("Line 9- &= Operator example, value of c : %d\n", c);
	c ^= 2;
		printf("Line 10 - ^= Operator example , Value of c : %d\n", c);
	c |= 2;
		printf("Line 11- |= Operator example, %d\n", c);
}
