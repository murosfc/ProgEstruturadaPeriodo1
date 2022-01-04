#include <stdlib.h>
#include <stdio.h>

#define T 5

void ler(int *vet);
void imp_sm(int *vet);

int main ()
{
	int vetor[T];
	ler (vetor);
	imp_sm (vetor);
}
void ler(int *vet)
{
	int i=0;
	printf ("\nDigite um vetor de numeros inteiros de %d caracteres: \n",T);
	for (i=0;i<T;i++)
		scanf ("%d",&vet[i]);
}
void imp_sm(int *vet)
{
	int aux1=0,aux2=0,i=0;
	vet[aux1]=vet[0];
	for (i=1;i<T;i++)
	{
	if (vet[aux1]<vet[i])
			aux1=i; //Salva em aux1 o endereço do maior numero do vetor
	}
	vet[aux2]=0;
	for (i=0;i<T;i++)
	{
		if (vet[aux2]<vet[i] && vet[i]!=vet[aux1])
			aux2=i; //Salva em aux2 o endereço do maior numero do vetor
	}
	printf ("\nO segundo maior numero do vetor e %d\n",vet[aux2]);
}