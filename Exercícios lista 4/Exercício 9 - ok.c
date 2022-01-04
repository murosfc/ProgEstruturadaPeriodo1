/* 9) Considere um vetor com 20 números inteiros gerados aleatoriamente de 1 até 30.
Faça um algoritmo para imprimir este vetor em ordem não-crescente utilizado o
algoritmo SelectionSort. Utilize três procedimentos: um para preencher o vetor, outro
para ordenar o vetor e um terceiro para imprimir o vetor antes e depois da ordenação. */
#include <stdio.h>
#include <time.h>

#define TAM 20

void fill_vet (int *vet);
void selection_sort (int *vet);
void prnt_vet (int *vet);

int main ()
{
	int vet[TAM];
	srand(time(NULL));
	fill_vet (vet);
	printf ("\nVetor gerado:\n");
	prnt_vet (vet);
	selection_sort (vet);
	printf ("\nVetor ordenado:\n");
	prnt_vet (vet);
	return 0;
}
void fill_vet (int *vet)
{
	int i=0;
	for (i=0;i<TAM;i++)
	{
		vet[i]=rand() %50 +1;
	}
}
void selection_sort (int *vet)
{
	int i=0,j=0,min,aux;
	for (i=0;i<TAM-1;i++)
	{
		min=i;
	for (j=i+1;j<TAM;j++)
		if (vet[j]<vet[min])
			min=j;
	aux=vet[i];
	vet[i]=vet[min];
	vet[min]=aux;
	}
}
void prnt_vet (int *vet)
{
    int i;
    for (i=0;i<TAM;i++)
        printf ("%d ",vet[i]);
}
		
		
		