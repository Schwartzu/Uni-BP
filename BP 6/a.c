#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define ARRAYSIZE 80
#define MIN 1000
#define MAX 9999

unsigned int my_interval_rand(unsigned int u, unsigned int o);

void array_init(unsigned int w[], int n, unsigned int u, unsigned int o);
unsigned int array_second_min(unsigned int w[], int n);

int compar (const void * p1, const void * p2);

int main(void)
{
	int i;
	unsigned int zk;
	unsigned int test[ARRAYSIZE];

	srand(time(NULL));

	array_init(test, ARRAYSIZE, MIN, MAX);

	printf("SOURCE:\n");
	for(i = 0; i < ARRAYSIZE; i++)
		printf("%i:\t%i\n", i, test[i]);
	

	printf("\n\n");

	zk = array_second_min(test, ARRAYSIZE);

	if(zk == UINT_MAX)
		printf("Es gibt keine zweitkleinste Zahl!\n");
	else
		printf("Der zweitkleinste wert: %i\n", zk);

	return 0;
}


unsigned int my_interval_rand(unsigned int u, unsigned int o)
{
	unsigned int random = rand();
	random %= o;
	if(random < 1000)
		random += u;
	return random;
}


void array_init(unsigned int w[], int n, unsigned int u, unsigned int o)
{
	int i;

	for(i = 0; i < n; i++){
		w[i] = my_interval_rand(u, o);
	}
}


unsigned int array_second_min(unsigned int w[], int n)
{
	int i;
	unsigned int c;
	unsigned int * buff;

	buff = (unsigned int *) malloc(n * sizeof(unsigned int));

	for(i = 0; i < n; i++){			/* MEMCPY */
		buff[i] = w[i];
	}

	qsort(buff, n, sizeof(unsigned int), compar);

	printf("SORTED:\n");
	for(i = 0; i < n; i++){
		printf("%i:\t%i\n", i, buff[i]);
	}

	c = buff[0];

	for(i = 0; i < n; i++){
		if(c != buff[i]){
			c = buff[i];
			free(buff);
			return c;
		}
	}

	free(buff);
	return UINT_MAX;

}


int compar (const void * p1, const void * p2)
{
	return (* (int *) p1 - * (int *) p2);
}
