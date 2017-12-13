#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c = 'b', d = '1', e = 69;

	printf("char\tint\t\n%c\t%i\n%c\t%i\n%c\t%i\n\n", c, c, d, d, e, e);

	e /= 3;

	printf("char\tint\t\n%c\t%i\n%c\t%i\n%c\t%i\n\n", c, c, d, d, e, e);

	d = c + e;

	printf("char\tint\t\n%c\t%i\n%c\t%i\n%c\t%i\n\n", c, c, d, d, e, e);

	e += 'N';

	printf("char\tint\t\n%c\t%i\n%c\t%i\n%c\t%i\n\n", c, c, d, d, e, e);

	c = toupper(c);

	printf("char\tint\t\n%c\t%i\n%c\t%i\n%c\t%i\n\n", c, c, d, d, e, e);

	printf("%c%c%c!!!", c, d, e);	



	return 0;
}