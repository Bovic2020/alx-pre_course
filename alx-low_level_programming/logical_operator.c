#include<stdio.h>
int main(void)
{
int a = 5;
int b = 20;
int c;
if (a && b)
{
printf("Line 1- Condition is true\n");
}
if (a || b)
{
printf("Line 2- Condition is true\n");
}
/*Changing the value of the variables*/
a = 0;
b = 10;
if (a && b)
{
printf("Line 3- condition is true\n");
}
else
{
printf("Line 3- condition id false\n");
}
if ( !(a && b))
{
printf("Line 4- Condition is true\n");
}
}
