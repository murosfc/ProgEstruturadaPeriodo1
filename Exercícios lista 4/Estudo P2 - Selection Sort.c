#include <stdio.h>
#include <time.h>

#define TAM 20

void fill_vet (int *vet);
void selsort (int *vet);
void prnt_vet (int *vet);

int main ()
{
	int vet[TAM];
	srand(time(NULL));
	fill_vet (vet);
	printf ("\nVetor gerado:\n");
	prnt_vet (vet);
	selsort (vet);
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
void selsort (int *vet)
{
	int i,j,swap;
	for (i=0;i<TAM-1;i++)
	{
		min=i;
		for (j=i+1;j<TAM;j++)
		{
			if (vet[j]<vet[min])
				min=j;
		}
		swap=vet[i];
		vet[i]=vet[min];
		vet[min]=swap;
	}		
}
void prnt_vet (int *vet)
{
    int i;
    for (i=0;i<TAM;i++)
        printf ("%d ",vet[i]);
}