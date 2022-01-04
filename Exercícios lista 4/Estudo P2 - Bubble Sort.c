#include <stdio.h>
#include <time.h>

#define TAM 20

void fill_vet (int *vet);
void bbsort (int *vet);
void prnt_vet (int *vet);

int main ()
{
	int vet[TAM];
	srand(time(NULL));
	fill_vet (vet);
	printf ("\nVetor gerado:\n");
	prnt_vet (vet);
	bbsort (vet);
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
void bbsort (int *vet)
{
	int i,j,swap;
	for (i=0;i<TAM;i++)
		for (j=0;j<TAM-1;j++)
			if (vet[j]>vet[j+1])
			{
				swap=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=swap;
			}
}
void prnt_vet (int *vet)
{
    int i;
    for (i=0;i<TAM;i++)
        printf ("%d ",vet[i]);
}