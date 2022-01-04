#include <stdio.h>

void ler(int *vet);
int test(int *vet);

int main()
{
	int vet[30],aux;
	ler(vet);
	aux = test(vet);
	if (aux==1)
		printf ("\nO vetor está em ordem não crescente");
	else printf ("\nO vetor não está em ordem não crescente");
	return 0;
}

void ler(int *vet)
{
	int i=0;
	printf ("Digite um vetor de 30 elementos");
	for (i=0;i<30;i++)
		scanf ("%d", &vet[i]);
}

int test(int *vet)
{
	int i=0, aux=0;
	for (i=0; vet[i+1]>vet[i]; i++)
	    aux++;
	if (aux==29)
		return 1;
	return 0;
}