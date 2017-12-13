#ifndef XMATH_H_INCLUDED
#define XMATH_H_INCLUDED

#define xceil(x) ((int) x == x ? (int) x : (x < 0 ? (int) x) : ((int) x + 1))
#define xfabs(x) (x < 0 ? (-x) : x)

double xpow(double x, int y);


#endif