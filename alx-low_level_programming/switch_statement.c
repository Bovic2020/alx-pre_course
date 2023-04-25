#include<stdio.h>
int main(void)
{
	char grade ='F'; //Variable declaration
	switch(grade)
	{
	case 'A':
	printf("Excellent!\n");
	break;
	case 'B':
	case 'C':
	printf("Well done\n");
	break;
	case 'D':
	printf("You passed\n");
	case 'F':
	printf("Better try again\n");
	default:
	printf("Invalid grade\n");	
	}
	printf("Your grade is %c\n", grade);
return (0);
}
