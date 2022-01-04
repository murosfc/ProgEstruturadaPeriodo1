/* 8) Considere um vetor com 15 números inteiros lidos pelo teclado. Faça um algoritmo
para imprimir este vetor em ordem não-decrescente utilizado o algoritmo SelectionSort.
Utilize três procedimentos: um para preencher o vetor, outro para ordenar o vetor e um
terceiro para imprimir o vetor antes e depois da ordenação. */

#include <stdio.h>
#include <time.h>

#define TAM 15

void fill_vet (int *vet);
void selsort (int *vet);
void prnt_vet (int *vet);

int main()
{
	srand (time(NULL));
	int vetor[TAM];
	fill_vet(vetor);
	printf ("\nVetor gerado: ");
	prnt_vet (vetor);
	selsort (vetor);
	printf ("\nVetor ordenado: ");
	prnt_vet (vetor);
	return 0;
}
void fill_vet (int *vet)
{
	int i;
	printf ("\nDigite os %d elementos do vetor.\n",TAM);
	for (i=0;i<TAM;i++)
	{
		//printf ("Posicao %d: ",i+1);
		//scanf ("%d",vet[i]);
		vet[i]=rand () %99;
	}
	
}
void prnt_vet (int *vet)
{
	int i;
	for (i=0;i<TAM;i++)
		printf ("%d ",vet[i]);
}
void selsort (int *vet)
{
	int i,j,maior,swap;
	for (i=0;i<TAM-1;i++)
	{
		maior=i;
		for (j=i+1;j<TAM;j++)
			if (vet[j]>vet[maior])
				maior=j;
		swap=vet[i];
		vet[i]=vet[maior];
		vet[maior]=swap;
	}
}
			
	