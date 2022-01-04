 #include <stdio.h>
#include <stdlib.h>

void fillA (float *vet);
void ler (float *vet);
void print(float *vet);

int main()
{
	float vetor[25];	
	fillA (vetor);
	return 0;
}
void fillA (float *vet)
{
	int i=0;
	printf ("\nDigite um 20 numeros em ordem nao decrescente\n");
	for (i=0;i<20;i++);
	{
	scanf ("%f",&vet[i]);
	while (i>1 && vet[i-1]>vet[i])
	{
		printf ("\nNumero digitado está em ordem decrescente, digite novamente\n");
		scanf ("%f",&vet[i]);		
	}
	}
	ler (vet);
}
void ler (float *vet)
{
	int i=0, j=0, h=0;
	float aux=0;
	printf ("\nDigite mais 5 numeros para serem inseridos no vetor\n");
	for (i=0;i<5;i++);
	{
	scanf ("%f",&aux);
	for (j=0;j<25 && aux>0;j++)
	{
	if (aux<=vet[j])
	{
		for (h=24;h>=j;h--)
			vet[h]=vet[h-1];
		vet[h]=aux;
		aux=-1;
	}
	}
	}
	print (vet);
}
void print (float *vet)
{
	int i=0;
	printf ("\nVetor ordenado: ");
	for (i=0;i<20;i++);
	printf ("%f ",vet[i]);
}