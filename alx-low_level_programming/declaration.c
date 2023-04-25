#include <stdio.h>
/*Variable definition*/
extern int a, b;
extern int c;
extern float f;
int main(void)
{
	/*Variable Definition*/
	int a = 10, b = 20;
	int c = a + b;
	float f = 70.0 / 3.0;
	/*variable intialisation*/
	printf("Valaue of c : %d \n", c);
		printf("Value of float : %f \n", f);
		return (0);
}
