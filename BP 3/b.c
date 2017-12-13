#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int icount, input;

	printf("Geben Sie eine dreistellige ganze Zahl ein: ");
	icount = scanf("%i", &input);

	if(icount != 1) {
		printf("Fehler beim einlesen der Eingabe!");
		return 1;
	}
	if(!(abs(input) >= 100 && abs(input) <= 999)) 
	{
		printf("Die Zahl ist nicht dreistellig!");
		return 1;
	} 
	if(getchar() != '\n') {
		printf("Unerwartete Zeichen nach der Zahl!");
		return 1;
	}

	char sinput[3];
	sprintf(sinput, "%i", abs(input));
	printf("(%c00 + %c0 + %c)", sinput[0], sinput[1], sinput[2]);
	
	if(input < 0) 
		printf(" * (-1)");
	return 0;

}