#include <stdio.h>

double berechne_bruttopreis(double nettopreis, double mehrwertsteuersatz);

int main(void)
{

	double nettopreis, mehrwertsteuersatz;
	int icount;

	printf("Geben Sie den Nettopreis gefolgt von den Mehrwertsteuersatz und getrennt durch ein Leerzeichen ein:\n");
	icount = scanf("%lf %lf", &nettopreis, &mehrwertsteuersatz);

	if(icount == 0) {
		printf("Fehler bei Nettopreis!");
		return 1;
	}
	if(icount == 1) {
		printf("Fehler bei Mehrwertsteuersatz!");
		return 1;
	}
	if(getchar() != '\n') {
		printf("Unerwartete Zeichen nach den Zahlen!");
		return 1;
	}
	if(nettopreis <= 0) {
		printf("Nettopreis muss > 0 sein!");
		return 1;
	}	
	if(mehrwertsteuersatz <= 0) {
		printf("Mehrwertsteuersatz muss > 0 sein!");
		return 1;
	}

	printf("Der Bruttopreis betraegt: %lf", berechne_bruttopreis(nettopreis, mehrwertsteuersatz));
	return 0;

}

double berechne_bruttopreis(double nettopreis, double mehrwertsteuersatz)
{
	return nettopreis + ((nettopreis / 100) * mehrwertsteuersatz);
}