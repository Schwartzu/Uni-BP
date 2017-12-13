#include <stdio.h>
#include <math.h>
#include <limits.h>

#include "xmath.h"

int main(void)
{
	double x = 2;
	int y = 6;

	printf("%i : %x\n", pow(x, y), pow(x, y));
	printf("%i : %x\n", xpow(x, y), xpow(x, y));
	if(pow(x, y) == xpow(x, y))
		printf("works");


	return 0;
}