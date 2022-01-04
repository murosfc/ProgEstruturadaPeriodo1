/*
6) Faça um algoritmo para ler 10 números inteiros a partir de um arquivo chamado
"Numeros.txt" e depois imprima-os na tela em ordem crescente.
- Obs.: Para facilitar, leia os números do arquivo, armazene-os em um vetor e depois
ordene este vetor. Seu algoritmo deve ter um procedimento para ordenar o vetor e outro
para imprimir o vetor antes e depois da ordenação.
- Exemplo de arquivo:
*/
#include <stdio.h>
#include <stdlib.h>

void ordenar (int vet[10]);
void prnt (int vet[10]);

int main()
{
	FILE *numeros;
	int i=0, vet[10];
	numeros = fopen ("Numeros.txt","r");
	if (numeros == NULL)
	{
		printf ("\nErro na abertura do arquivo.\n\n");
		return 0;
	}
	do
	{
		fscanf (numeros,"%d",&vet[i]);
		i++;
	}
	while (!feof(numeros));
	printf ("\nNumeros lidos do arquivo: ");
	prnt (vet);
	ordenar (vet);
	printf ("\nNumeros ordenados: ");
	prnt (vet);
	fclose (numeros);
	return 0;
}
void prnt (int vet[10])
{
	for (int i=0;i<10;i++)
		printf ("%d ",vet[i]);
}
void ordenar (int vet[10])
{	
	int menor,i,j;	
	for (i=0;i<10-1;i++)
		for (j=i;j<10;j++)
		if (vet[j]<vet[i])
			{
				menor=vet[i];
				vet[i]=vet[j];
				vet[j]=menor;
			}
}	