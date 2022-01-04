#include <stdio.h>
#include <stdlib.h>

#define vertices 15

void ler (int grafo[][vertices]);
void k_regular (int grafo[][vertices]);

int main()
{
	int grafo[vertices][vertices];
	ler (grafo);
	k_regular (grafo);
	return 0;
}
void ler (int grafo[][vertices])
{
	int i,j;
	printf ("\nDigite as interacoes dos vertices: ");
	for (i=0;i<vertices;i++)
		for (j=0;j<vertices;j++)
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
void k_regular (int grafo[][vertices])
{
	int teste[vertices], grau=0;
	int i,j;
	for (i=0;i<vertices;i++)
	{
		for (j=0;j<vertices;j++)
			grau=grau+grafo[i][j];
		teste[i]=grau;
		grau=0;
	}
	for (i=0;i<vertices-1;i++)
	{
		if (teste[i]==teste[i+1])
			grau++;
	}
	if (grau==vertices-1)
		printf ("\nG e um grafo k-regular com valor k= %d\n",teste[0]);
	else printf ("\nG não e um grafo k-regular\n");
}
		