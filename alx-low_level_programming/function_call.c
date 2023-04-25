/*function definition to swap the values*/
void swap(int x , int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
return;
}
#include<stdio.h>
void swap(int x, int y); //function definition
int main(void) //entry point
{
/*Variable declarataion*/
int a = 100;
int b = 200;
	printf("Before swap, value of a : %d\n", a);
	printf("Before swap, value of b : %d\n", b);
/**calling the function**/
swap(a, b);
	printf("After swap, value of a : %d\n", a);
	printf("After swapp, value of b : %d\n", b);
return (0);
}
