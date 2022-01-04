#include <stdio.h>
#include <time.h>

#define n 5

void geravet (int vet[]);
int calc_soma (int vet[], int cont);

int main ()
{
    int vet[n],cont=0;
    srand (time(NULL));
    geravet (vet);    
    printf ("\nSoma dos elementos do vetor = %d",calc_soma(vet,cont));
    return 0;
}
void geravet (int vet[])
{
    int i;
    for (i=0;i<n;i++)
	{
		 vet[i]=rand() % 50 +1;
		 printf ("vet[%d] = %d\n",i,vet[i]);
	}
       
}
int calc_soma (int vet[], int cont)
{
    int soma=0;
    if (cont==n-1)
        return vet[cont];    
    soma=calc_soma(vet,cont+1)+vet[cont];
    return soma;
}