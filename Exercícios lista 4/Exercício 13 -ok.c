/* Considere um vetor com 20 números inteiros gerados aleatoriamente de 1 até 30. 
Faça um algoritmo para imprimir este vetor em ordem não-crescente utilizado o algoritmo QuickSort. 
Utilize três procedimentos: um para preencher o vetor, outro para ordenar o vetor e um terceiro para imprimir o vetor antes e depois da ordenação.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int particiona(int *vet, int ini, int fim)
{
	int pivo=vet[ini],i=ini,j,aux;
	for (j=ini+1;j<=fim;j++)
	{
		if (vet[j]>=pivo)
		{
			i++;
			aux=vet[i];
			vet[i]=vet[j];
			vet[j]=aux;
		}
		aux=vet[ini];
		vet[ini]=vet[i];
		vet[i]=vet[ini];
	}
	return i;
}

void quicksort (int *vet, int ini, int fim)
{
	int pivo;
	if (ini<fim)
	{
		pivo=particiona(vet,ini,fim);
		quicksort (vet,ini,pivo-1);
		quicksort (vet,pivo+1,fim);
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

