#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lin 30

void leia (char nomes[][20]);
void imprime (char nome[20], char nomes[][20]);

int main()
{
	char nomes[lin][20],nome[20];
	leia (nomes);
	printf ("\nDigite um nome para buscar ma matriz:\n");
	scanf(" %[^\n]s",&nome);
	imprime (nome,nomes);
	return 0;
}
void leia (char nomes[][20])
{
	int i=0;
	printf ("\nDigite os %d nomes: \n",lin);
	for (i=0;i<lin;i++)
		scanf(" %[^\n]s",&nomes[i]);
}
void imprime (char nome[20], char nomes[][20])
{
	int i=0, aux;
	for (i=0;i<lin;i++)
		if (strcmp (nome,nomes[i])==0)
			aux = i+1;
	printf ("\nNome digitado consta na linha %d da matriz\n",aux);
}
	