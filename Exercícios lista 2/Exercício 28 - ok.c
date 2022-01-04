/* 
Faça um algoritmo para ler pelo teclado a matriz de adjacência A(D) de um dígrafo
simples D com 20 vértices e preencher a matriz de adjacência R(D’) de um dígrafo
simples D’, onde D’ possui os arcos reversos de D. Ou seja, D’ possui o arco (i,j) se, e
somente se, o arco (j,i) pertence a D. Crie e utilize dois procedimentos: um para ler a
matriz de adjacência A(D) pelo teclado e outro para preencher a matriz de adjacência
R(D’).
*/

#include <stdio.h>
#include <stdlib.h>

#define vert 20

void ler (int digrafo[][vert]);
void fill_d_linha (int digrafo[][vert], int d_linha[][vert]);


int main()
{
	int digrafo[vert][vert],d_linha[vert][vert],i=0,j=0;
	ler (digrafo);
	fill_d_linha (digrafo,d_linha);
	printf ("\nA(D):");
	for (i=0;i<vert;i++)
	{
		printf ("\n");
			for (j=0;j<vert;j++)
				printf ("%d ",digrafo[i][j]);
	}
	printf ("\n\nA(D'):");
	for (i=0;i<vert;i++)
	{
		printf ("\n");
			for (j=0;j<vert;j++)
				printf ("%d ",d_linha[i][j]);
	}
	return 0;
}
void ler (int digrafo[][vert])
{
	int i,j;
	printf ("\nDigite as interacoes dos vertices: ");
	for (i=0;i<vert;i++)
		for (j=0;j<vert;j++)
		{
			if (i==j)
			    digrafo[i][j]=0;
			else
			{
			    printf ("\nVertice %d e %d: ",i+1,j+1);
			    scanf ("%d",&digrafo[i][j]);
			}
		}
}
void fill_d_linha (int digrafo[][vert], int d_linha[][vert])
{
	int i,j;
	d_linha[0][0]=0;
		for (i=0;i<vert;i++)
			for (j=0;j<vert;j++)
			{
				if (d_linha[i][j]!=1)
					d_linha[i][j]=0;
				if (digrafo[i][j]==1)
					d_linha[j][i]=1;
			}
}
	