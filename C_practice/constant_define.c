/*#include<stdio.h>
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'
int main(void)
{
	int area;
	area = LENGTH * WIDTH;
	printf("Value of the are is : %d \n", area);
	return (0);
}*/
#include<stdio.h>
/*the use of const keyword to declare a constant*/
int main(void)
{
	const int LENGTH = 10;
	const int WIDTH = 4;
	const char NEWLINE = '\n';
		int area;
		area = LENGTH * WIDTH;
		printf("Value of area : %d", area);
		printf("%C", NEWLINE);
		return (0);
}
