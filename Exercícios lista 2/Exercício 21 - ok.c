#include <stdio.h>
#include <stdlib.h>

#define lin 50

void leia (char nomes[][20]);
void print_inv (char nomes[][20]);

int main ()
{
	char nomes[lin][20];
	leia (nomes);
	print_inv (nomes);
	return 0;
}
void leia (char nomes[][20])
{
	printf ("\nDigite %d nomes com no maximo 20 caracteres: \n",lin);
	for (int i=0;i<lin;i++)
		scanf(" %[^\n]s",nomes[i]);
}
void print_inv (char nomes[][20])
{
	int aux=0,i=0;
	for (i=(lin-1);i>=0;i--)
	{
	    printf ("\nNome na posição %d: %s",i+1,nomes[i]);
	}
}