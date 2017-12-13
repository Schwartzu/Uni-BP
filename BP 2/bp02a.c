#include <stdio.h>


int main(void)
{
	int i = 42, j = 9, k;

	printf("i=%4i\nj=%04i\nk=%i\n\n", i, j, k);

	k = i - 21;

	printf("i=%4i\nj=%04i\nk=%i\n\n", i, j, k);

	k = i % j;

	printf("i=%4i\nj=%04i\nk=%i\n\n", i, j, k);

	i = k * j;

	printf("i=%4i\nj=%04i\nk=%i\n\n", i, j, k);

	printf("Geben Sie zwei ganze Zahlen durch einen Doppelpunkt getrennt ein:\n");

	k = scanf("%i:%i", &i, &j);

	printf("i=%4i\nj=%04i\nk=%i\n\n", i, j, k);

	return 0;
}
