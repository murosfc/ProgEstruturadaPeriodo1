#include <stdio.h>
#include <stdlib.h>

void ler_mat (float mat[][5]);
int test (float mat[][5]);

int main()
{
	float matriz[3][5];
	ler_mat (matriz);
	printf ("\nA matriz digitada possui %d elementos maiores do que 20\n",test (matriz));
	return 0;
}
void ler_mat (float mat[][5])
{
	int i=0,j=0;
	printf ("\nDigite os valores da matriz 3X5:\n");
	for (i=0;i<3;i++)
		for (j=0;j<5;j++)
		{	
		printf ("\nElemento[%d][%d]: ",i,j);
			scanf ("%f",&mat[i][j]);
		}
}	
int test (float mat[][5])
{	
	int i=0,j=0,cont=0;
	for (i=0;i<3;i++)
		for (j=0;j<5;j++)
		{
		if (mat[i][j]>20)
		cont++;
		}
	return cont;
}
	
