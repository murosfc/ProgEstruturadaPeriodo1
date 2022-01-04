#include <stdio.h>
#include <stdlib.h>

void ler_mat (float mat[][3]);
void print (float mat[][3]);

int main()
{
	float matriz[4][3];
	ler_mat (matriz);
	print (matriz);
	return 0;
}
void ler_mat (float mat[][3])
{
	int i=0,j=0;
	printf ("\nDigite os valores da matriz 4X3:\n");
	for (i=0;i<4;i++)
		for (j=0;j<3;j++)
		{	
		printf ("\nElemento[%d][%d]: ",i,j);
			scanf ("%f",&mat[i][j]);
		}
}
void print (float mat[][3])
{
	int i=0,j=0,i1=0,j1=0;
	for (i=0;i<4;i++)
		for (j=0;j<3;j++)
			if (mat[i][j]>mat[i1][j1])
			{
				i1=i;
				j1=j;
			}
	printf ("\nMaior elemento da Matriz: %.2f que esta na linha %d, coluna %d",mat[i1][j1],i1,j1);
}