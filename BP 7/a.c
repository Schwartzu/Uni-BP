#include <stdio.h>
#include <math.h>
#include <limits.h>

#include "xmath.h"

int main(void)
{
	double x = -101;
	int y = -INT_MAX + 1;

	printf("%lf : %x\n", pow(x, y), pow(x, y));
	printf("%lf : %x\n", xpow(x, y), xpow(x, y));
	if(pow(x, y) == xpow(x, y))
		printf("kek");


	return 0;
}
