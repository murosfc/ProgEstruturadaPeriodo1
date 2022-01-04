/*
12) Considere um vetor com 15 números inteiros lidos pelo teclado.
 Faça um algoritmo para imprimir este vetor em ordem não-decrescente utilizado o algoritmo QuickSort.
  Utilize três procedimentos: um para preencher o vetor, outro para ordenar o vetor e um terceiro para imprimir o vetor antes e depois da ordenação.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15

int particiona (int *vet, int esq, int dir)
{
	int pivo=vet[esq], i=esq , j ,swap;
	for (j=esq+1;j<=dir;j++)
	{
		if (vet[j]<=pivo)
		{
			i++;
			swap=vet[i];
			vet[i]=vet[j];
			vet[j]=swap;
		}
	}
	swap=vet[esq];
	vet[esq]=vet[i];
	vet[i]=swap;
	return i;	
}

void quicksort (int *v, int esq, int dir)
{
	int pivo;
	if (esq<dir)
	{
		pivo=particiona(v,esq,dir);
		quicksort (v,esq,pivo-1);
		quicksort (v,pivo+1,dir);
	}	
}

void printvet (int *vet)
{
	int i=0;
	printf ("\n");
	for (i=0;i<TAM;i++)
		printf ("%d ",vet[i]);	
}

void gera (int *vet)
{
	int i=0;
	srand (time(NULL));
	for (i=0;i<TAM;i++)
		vet[i]=rand()%30 +1;
}

int main ()
{
	int vet[TAM];
	gera (vet);
	printvet (vet);
	quicksort (vet,0,TAM-1);
	printvet (vet);
	return 0;	
}
