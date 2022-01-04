#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void ler(char *p1, char *p2);
void imp_vet(char *p1, char *p2);

int main()
{
	char p1[10] , p2[10];
	ler(p1, p2);	
	return 0;
}
void ler(char *p1, char *p2)
{
	printf ("\nDigite a palavra 1:\n");
	scanf ("%s",&p1);
	printf ("\nDigite a palavra 2:\n");
	scanf ("%s",&p2);
	imp_vet(&p1, &p2);
}
void imp_vet(char *p1, char *p2)
{
	if (strlen(p1) == strlen(p2))
	printf ("\nAs palavras digitadas tem o mesmo tamanho\n");
	else printf ("\nAs palavras digitadas possuem tamanho diferentes");
}