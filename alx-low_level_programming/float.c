#include <stdio.h>
#include <float.h>
int main(void)
{
	printf("Storage size of float data type : %d \n", sizeof(float));
	printf("Max float positive value : %E\n", FLT_MIN);
	printf("Min float positive value : %E\n", FLT_MAX);
	printf("Precision value : %d\n", FLT_DIG);
	return (0);
}
