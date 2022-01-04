/*
    Considere as matrizes A [n × m] e B [m × n] , onde n = 4 e m = 5, ambas com
    números inteiros gerados aleatoriamente de 1 até 30. Faça um algoritmo para gerar as
    matrizes A e B, fazendo, em seguida, a verificação da seguinte condição:
    Crie e utilize um procedimento para gerar a matriz e uma função para retornar 1,
    se a condição for satisfeita, ou retornar 0, caso contrário. De acordo com o retorno da
    função de verificação, deve-se imprimir na função main: “Condicao Satisfeita” ou
    “Condicao Nao Satisfeita”.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 4
#define m 5

void ger_mat (int matA[][m],int matB[][n]);
int valida (int matA[][m],int matB[][n]);

int main()
{
	int matA[n][m],matB[m][n],i,j;
	srand (time(NULL));
	ger_mat (matA,matB);
	if (valida(matA,matB)==1)
		printf ("\nCondicao Satisfeita\n");
	else printf ("\nCondicao Nao Satisfeita\n");
	return 0;	
}
void ger_mat (int matA[][m],int matB[][n])
{
	int i,j;
	for (i=0;i<n;i++)
		for (j=0;j<m;j++)
			matA[i][j]=rand () % 30 +1;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			matB[i][j]=rand () % 30 +1;
}
int valida (int matA[][m],int matB[][n])
{
	//(o menor somatorio das linhas de A) <= (o maior produtorio das colunas de B)
	int sumA=0,prodB=0,aux, i,j;
	for (j=0;j<m;j++)
	{
		aux=0;
		for (i=0;i<n;i++)
			aux+=matA[i][j];
		if (j==0)
			sumA=aux;
	    if (sumA>aux)
	        sumA=aux;
	}
	for (i=0;i<m;i++)
	{
		aux=1;
		for (j=0;j<n;j++)
			aux *=matB[i][j];
		if (i==0)
			prodB=aux;
		else if (prodB<aux)
			prodB=aux;			
	}
	printf ("\nSomatorio linhas A: %d. Pordutorio colunas B: %d \n",sumA,prodB);
	if (sumA<=prodB)
		return 1;
	else return 0;
}
			