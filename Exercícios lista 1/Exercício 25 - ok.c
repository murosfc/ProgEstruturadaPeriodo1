/* 25) Considere um vetor com 100 números lidos pelo teclado. Faça um algoritmo que imprima todos os números que aparecem somente uma vez no vetor. Crie e utilize dois procedimentos: uma para preencher o vetor e outro para imprimir o que se pede. Exemplo com um vetor de 10 números: Vetor: {3, 1, 9, 8, 3, 10, 1, 5, 9, 1} Números que aparecem somente uma vez: 8, 10, 5
Obs.: Não é permitido utilizar qualquer estrutura de dados auxiliar.*/

#include <stdlib.h>
#include <stdio.h>

#define T 100

void ler (int *num);
void org_print (int *num);

int main ()
{
	int vet[T];
	ler (vet);		
	return 0;
}
void ler (int *num)
{
	int i=0;
	printf ("\nDigite um vetor de %d numeros:\n",T);
	for (i=0;i<T;i++)
		scanf ("%d",&num[i]);
	org_print (num);
}
void org_print (int *num)
{
	int i=0,j,cont;
	printf ("\nVetor digitado: ");
	for (i=0;i<T;i++)
		printf ("%d ",num[i]);
	printf ("\nNumeros que aparecem somente uma vez: ");
	for (i=0;i<T;i++)
	{
		cont=0;
		for (j=0; j<T;j++)
		{
			if (i!=j && num[i] == num[j])
				cont++;
		}
		if (cont==0)
			printf ("%d ",num[i]);		
	}
}
		
		