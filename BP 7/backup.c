#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <errno.h>
#include <math.h>

#include "math.h"

double xpow(double x, int y)
{
	int i, neg = 0;
	long double res = 1.0;

	if(x < 0 && y % 2 != 0){
		neg = 1;
		x = x < 0 ? -x : x;
	}

	if((x == 0 && y < 0)){
		errno = EDOM;
		return 0;
	}

	if(y < 0){
		res = 1 / xpow(x, -y);
		if(res <= DBL_MIN){
			errno = ERANGE;
			return 0;
		}
	}
	else{
		for(i = 1; i <= y; i++){
			res *= x;
			if(res > DBL_MAX){
				errno = ERANGE;
				return 0;
			}
		}
	}

	if(res > DBL_MAX){
		errno = ERANGE;
		return 0;
	}

	errno = 0;
	return neg ? -res : res;
}