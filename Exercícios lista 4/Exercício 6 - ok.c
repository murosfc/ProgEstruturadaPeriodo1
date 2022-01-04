/* 6) Considere um vetor com 15 números inteiros lidos pelo teclado. Faça um algoritmo
para imprimir este vetor em ordem não-decrescente utilizado o algoritmo BubbleSort.
Utilize três procedimentos: um para preencher o vetor, outro para ordenar o vetor e um
terceiro para imprimir o vetor antes e depois da ordenação. */

#include <stdio.h>
#include <time.h>

#define TAM 15

void ler_vet (int *vet);
void prnt_vet (int *vet);
void bbsort (int *vet);

int main ()
{
	int vetor[TAM];
	ler_vet(vetor);
	srand (time(NULL));
	prnt_vet (vetor);
	return 0;
}
void ler_vet (int *vet)
{
	int i=0;
	printf ("\nDigite o valores do vetor de tamanho: %d\n",TAM); 
	for (i=0;i<TAM;i++)
	{
		printf ("\nPosicao 1: ");
		scanf ("%d",&vet[i]);
		//vet[i]=rand () %50;
}
void prnt_vet (int *vet)
{
	int i=0;
	printf ("\nVetor digitado: ");
	for (i=0;i<TAM;i++)
		printf ("%d ",vet[i]);
	bbsort (vet);
	printf ("\nVetor ordenado: ");
	for (i=0;i<TAM;i++)
		printf ("%d ",vet[i]);
}
void bbsort (int *vet)
{
	int i,j,swap;
	for (i=0;i<TAM;i++)
		for (j=0;j<TAM-1;j++)
		{
			if (vet[j]>vet[j+1])
			{
				swap=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=swap;
			}
		}
}