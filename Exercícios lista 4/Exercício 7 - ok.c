/* 7) Considere um vetor com 20 números inteiros gerados aleatoriamente de 1 até 30.
Faça um algoritmo para imprimir este vetor em ordem não-crescente utilizado o
algoritmo BubbleSort. Utilize três procedimentos: um para preencher o vetor, outro
para ordenar o vetor e um terceiro para imprimir o vetor antes e depois da ordenação. */

#include <stdio.h>
#include <time.h>

#define TAM 20

void fill_vet (int *vet);
void bbsort (int *vet);
void prnt_vet (int *vet);

int main ()
{
	int vetor[TAM];
	srand(time(NULL));
	fill_vet (vetor);
	printf ("\nVetor gerado: ");
	prnt_vet (vetor);
	bbsort (vetor);
	printf ("\nVetor ordenado: ");
	prnt_vet (vetor);
	return 0;
}
void fill_vet (int *vet)
{
	int i;
	for (i=0;i<TAM;i++)
		vet[i]=rand() %30 +1;
}
void prnt_vet (int *vet)
{
	int i;
	for (i=0;i<TAM;i++)
		printf ("%d ",vet[i]);
}
void bbsort (int *vet)
{
	int i,j,swap;
	for (i=0;i<TAM;i++)
		for (j=0;j<TAM-1;j++)
			if (vet[j]<vet[j+1])
			{
				swap=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=swap;
			}
}
		
	
