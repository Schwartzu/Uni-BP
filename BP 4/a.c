#include <stdio.h>

int read_positive_number(void);
int mod(int a, int b);

int main(void)
{
	int input[2] = {-1, -1};
	int i;

	printf("Das folgende Programm berechnet den mod  zweier ganzen positiven Zahlen\n");
	for(i = 0; i <= 1; i++)
	{
		do{
			if(input[i] == 0)
				printf("Ungueltige Eingabe!\n");
			printf("Geben Sie die ");
			i ? printf("zweite") : printf("erste");
			printf(" Zahl ein:");
		}
		while((input[i] = read_positive_number()) == 0);
	}

	printf("Der mod von %i und %i betraegt %i", input[0], input[1], mod(input[0], input[1]));

	return 0;
}


int read_positive_number(void)
{
	int x;
	if(scanf("%i", &x) != 1 || x <= 0 || getchar() != '\n') {
		while (getchar() != '\n') {}
		return 0;
	}
	return x;
} 

int mod(int a, int b)
{
	while(a >= b)
		a -= b;

	return a;
}