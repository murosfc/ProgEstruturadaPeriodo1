#include <stdio.h>
#include <stdlib.h>

#define vert 20

void ler (int grafo[][vert]);
int ck_grafo (int grafo[][vert]);

int main()
{
	int grafo[vert][vert];
	ler (grafo);
	if (ck_grafo (grafo)==1)
		printf ("\nA Matriz digitada eh a matriz de adjacencia A(G) de um grafo simples nao-direcionado.\n");
	else printf ("\nA Matriz digitada nao e a matriz de adjacencia A(G) de um grafo simples nao-direcionado.\n");
	return 0;
}
void ler (int grafo[][vert])
{
	int i,j;
	printf ("\nDigite as interacoes dos vertices: ");
	for (i=0;i<vert;i++)
		for (j=0;j<vert;j++)
		{
			printf ("\nVertice %d e %d: ",i+1,j+1);
			scanf ("%d",&grafo[i][j]);
			
		}
}
int ck_grafo (int grafo[][vert])
{
	int i,j, controle=2;
	do
	{
		for (i=0;i<vert;i++)
			for (j=0;j<vert;j++)
			{
				if (i==j && grafo[i][j]!=0)
					controle =0;
				if (grafo[i][j] != grafo[j][i])
					controle=0;
				if (grafo[i][j] >= 2)
					controle=0;
			}
			if (controle==2)
			    controle=1;
	}
	while (controle==2);
	return controle;
}
			