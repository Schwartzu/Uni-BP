#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 30
#define MIN_LENGTH 3
#define SEARCH ' '

int read_string(char input[]);
int count_string(char w[], char c);

int main(void)
{
	char input[MAX_LENGTH + 1];
	printf("Geben Sie zwischen %i und %i Zeichen ein, oder \"exit\" zum schliessen:\n", MIN_LENGTH, MAX_LENGTH);
	while(1){
		if(read_string(input)){

			if(!strcmp(input, "exit"))
				return 0;

			printf("\nErfolgreich!\n");
			printf("%i * '%c' in %s\n\n", count_string(input, SEARCH), SEARCH, input);

		} else
			printf("Ungueltige Eingabe!\n\n");
	}
	return 0;

}


int read_string(char input[])
{
	int i;

	for(i = 0; i < MAX_LENGTH; i++){
		input[i] = getchar();
		if(input[i] == '\n'){
			if(i >= 3){
				input[i] = '\0';
				return 1;
			}
			if(!feof(stdin))			
				return 0;
			
		}
	}


	if(getchar() != '\n'){
		while(getchar() != '\n') {}
		return 0;
	}
	return -1;

}

int count_string(char w[], char c)
{
	int i = 0, n = 0;
	while(1){
		if(c == w[i++])
			n++;
		if(w[i] == '\0')
			return n;

	}
}