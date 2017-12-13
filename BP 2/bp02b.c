#include <stdio.h>
#include <math.h>

int main(void)
{
	double r = 9.6, s = 15.0, t = 0.1;

	printf("r=%f\ns=%.2f\nt=%e\n\n", r, s, t);

	s = 20 * t;

	printf("r=%f\ns=%.2f\nt=%e\n\n", r, s, t);

	t += r;

	printf("r=%f\ns=%.2f\nt=%e\n\n", r, s, t);

	t = -100 * r;

	printf("r=%f\ns=%.2f\nt=%e\n\n", r, s, t);

	s = sqrt(r);

	printf("r=%f\ns=%.2f\nt=%e\n\n", r, s, t);


	return 0;
}