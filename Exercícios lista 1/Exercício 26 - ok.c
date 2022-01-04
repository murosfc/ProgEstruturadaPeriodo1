/*  Considere um vetor com 100 números lidos pelo teclado. 
Faça um algoritmo para ler pelo teclado (na função main) um número inteiro n (1 = n = 100) 
e imprimir todos os números que aparecem no vetor exatamente n vezes. 
Caso nenhum número apareça exatamente n vezes no vetor, esta informação deve ser impressa. 
Crie e utilize dois procedimentos: uma para preencher o vetor e outro para imprimir o que se pede.
Exemplo com um vetor de 10 números e n = 2: Vetor: {3, 1, 9, 8, 3, 10, 1, 5, 9, 1} Números que aparecem exatamente 2 vezes: 3, 9 */

#include <stdlib.h>
#include <stdio.h>

#define T 5

#include <stdlib.h>
#include <stdio.h>

#define T 5

void ler (int *num);
void org_print (int n, int *num);

int main ()
{
	int n, i;
	int vet[T];
	printf ("\nDigite um numero inteiro entre 1 e 100:\n");
	scanf ("%d",&n);
	ler (vet);
	printf ("\nVetor digitado: ");
	for (i=0;i<T;i++)
		printf ("%d ",vet[i]);
	org_print (n,vet);
	return 0;
}
void ler (int *num)
{
	int i=0;
	printf ("\nDigite um vetor de %d numeros:\n",T);
	for (i=0;i<T;i++)
		scanf ("%d",&num[i]);
	}
void org_print (int n, int *num)
{
	int i=0,j,cont=0, cont2=0;
	printf ("\n Numeros que aparecem exatamente %d vez(es): ",n);
	while (i<T)
	{
		cont=0;
		for (j=i+1; j<T;j++)
		{
			if (num[i]==num[j])
				cont++;
		}
		if (cont==n-1)
		{
			printf ("%d ",num[i]);
			cont2++;
		}
		i++;		
		for (j=i-1;j>=0;j--)
		    if (num[j]==num[i])
		    {
		        i++;
		        j=i-1;
		    }
	}
	if (cont2 == 0)
	    printf ("nenhum\n\n");
}