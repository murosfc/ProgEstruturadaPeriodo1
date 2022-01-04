/*
20) Considere um vetor com 20 números inteiros gerados aleatoriamente de 1 até 40. Faça um algoritmo recursivo para imprimir o maior valor deste vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maior (int *v, int n)
{
	int max=v[n];
	if (n<19)
	{
		if (v[n+1]>max)
			max=v[n+1];
		maior (v,n+1);
	}
	return max;
}

void printvet (int *vet)
{
	int i=0;
	for (i=0;i<20;i++)
		printf ("%d ",vet[i]);	
}

void gera (int *vet)
{
	int i=0;
	srand (time(NULL));
	for (i=0;i<20;i++)
		vet[i]=rand()%40 +1;
}

int main ()
{
	int vet[20];
	gera (vet);
	printvet (vet);
	printf ("\nMaior valor do vetor: %d\n\n",maior(vet, 0));
	return 0;	
}