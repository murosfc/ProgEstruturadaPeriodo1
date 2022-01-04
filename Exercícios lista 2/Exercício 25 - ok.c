#include <stdio.h>
#include <stdlib.h>

#define ordem 10

void ler(int grafo[][ordem]);
void imp(int grafo[][ordem]);

int main()
{
	int grafo[ordem][ordem];
	ler (grafo);
	imp (grafo);
	return 0;
}
void ler(int grafo[][ordem])
{
	int i,j;
	printf ("\nDigite as interacoes dos vertices: ");
	for (i=0;i<ordem;i++)
		for (j=0;j<ordem;j++)
		{
			if (i==j)
				grafo[i][j]=0;
			else 
			{
			    printf ("\nVertice %d e %d: ",i+1,j+1);
			    scanf ("%d",&grafo[i][j]);
			}
		}
}
void imp(int grafo[][ordem])
{
	int i,j,cont;
	printf ("\nGrau dos vertices d(v): ");
	for (i=0;i<ordem;i++)
	{
		cont=0;
		for (j=0;j<ordem;j++)
		{
			if (grafo[i][j]==1)
				cont++;
		}
		printf ("\nd(%d): %d",i,cont);
	}
}