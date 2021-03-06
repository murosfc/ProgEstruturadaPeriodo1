/* 11) Considere um vetor com 20 n?meros inteiros gerados aleatoriamente de 1 at? 30. 
Fa?a um algoritmo para imprimir este vetor em ordem n?o-crescente utilizado o algoritmo InsertionSort. 
Utilize tr?s procedimentos: um para preencher o vetor, outro para ordenar o vetor e um terceiro para imprimir o vetor antes e depois da ordena??o.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

void selectionsort (int *v)
{
	int i,j,valor;
	for (i=1;i<TAM;i++)
	{
		valor=v[i];		
		for (j=i-1;(j>=0) && (valor<v[j]);j--)
			v[j+1]=v[j];
		v[j+1]=valor;	
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
	selectionsort (vet);
	printvet (vet);
	return 0;	
}
