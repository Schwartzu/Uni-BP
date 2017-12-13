#include <stdio.h>

void entry(char * Complete, char * Simpsons, char * Names);

int main(void)
{
	entry("Complete", "Simpsons", "Names");
	entry("--------", "--------", "-----");
	entry("Homer", "(Jay)", "Simpson");
	entry("Marjorie", "\"Marge\"", "Simpson");
	entry("Bartholomew", "\"Bart\"", "Simpson");
	entry("Lisa", "(Marie)", "Simpson");
	entry("Margaret", "\"Maggie\"", "Simpson");
	return 0;
}

void entry(char * Complete, char * Simpsons, char * Names)
{
	printf("%-20s%-20s%s\n", Complete, Simpsons, Names);
	return;
}