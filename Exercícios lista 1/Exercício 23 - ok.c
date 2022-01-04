#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler (char *p1, char *p2);
void printt (char *p1, char *p2);

int main()
{
	char palavra1[10] , palavra2[10];
	ler (palavra1, palavra2);	
	return 0;
}
void ler (char *p1, char *p2)
{
	printf ("\nDigite a palavra 1\n");
	scanf ("%s",&p1);
	printf ("\nDigite a palavra 2\n");
	scanf ("%s",&p2);
	printt (&p1,&p2);
	}
void printt (char *p1, char *p2)
{
	int aux=0;
	aux = strcmp (p1,p2);
	if (aux == 0)
	printf ("%c e %c sao palavras iguais",p1,p2);
	else if (aux == 1)
	printf ("\nPalavras em ordem alfabetica %c , %c",p2,p1);
	else printf ("\nPalavras em ordem alfabetica %c , %c",p1,p2);
}