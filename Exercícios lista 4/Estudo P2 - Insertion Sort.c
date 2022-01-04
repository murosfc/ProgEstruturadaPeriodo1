#include <stdio.h>
#include <time.h>

#define TAM 20

void fill_vet (int *vet);
void insort (int *vet);
void prnt_vet (int *vet);

int main ()
{
	int vet[TAM];
	srand(time(NULL));
	fill_vet (vet);
	printf ("\nVetor gerado:\n");
	prnt_vet (vet);
	insort (vet);
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
void insort (int *vet)
{
	int i,j,swap,valor;
	for (i=1;i<TAM;i++)
	{
		valor=vet[i];
		for (j=i-1;(j>=0) && (valor<vet[j]);j--)
			vet[j+1]=vet[j];
		vet[j+1]=valor;
	}		
}
void prnt_vet (int *vet)
{
    int i;
    for (i=0;i<TAM;i++)
        printf ("%d ",vet[i]);
}