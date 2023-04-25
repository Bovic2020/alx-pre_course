/**function defintion to swap the values*/
void swap(int *x, int *y)
{
int temp = *x; // save the value at address *x
*x = *y; // put y into x
*y = temp; //put x into y
return;
}
/**Calling the function swap() **/
#include<stdio.h>
void swap(int *x , int *y);
int main(void)
{
/*local variable declaration*/
	int a = 100;
	int b = 200;
	printf("before swap, value of a : %d\n", a);
	printf("before swap, value of b : %d\n", b);
/*calling a function to swapthe values
&a indicate point to a i.e address to a variable a
&v´b in´dicate pointer to b  i.e address to a variable b
*/
	swap(&a, &b);
	printf("after swap, value of a : %d\n", a);
	printf("after swap, value of b : %d\n", b);
return(0);
}

