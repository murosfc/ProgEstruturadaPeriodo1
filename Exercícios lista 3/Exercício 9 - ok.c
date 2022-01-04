/*
9) Faça um algoritmo para gerar uma matriz 10 x 10 aleatoriamente com números de
0 até 39, com exceção dos elementos da diagonal principal, que devem ser gerados
aleatoriamente com números de 1 até 50. A matriz gerada deve ser armazenada no
arquivo "Matriz10x10.txt".
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	FILE *mat;
	int i,j,matriz[10][10];
	srand (time(NULL));
	mat = fopen("Matriz10x10.txt","w");
	if (mat==NULL)
	{
		printf ("\nErro na abertura do arquivo\n\n");
		return 0;
	}
	for (i=0;i<10;i++)
	{
		for (j=0;j<10;j++)
		{
			if (i==j)
				matriz[i][j]=rand() %50 +1;
			else matriz[i][j]=rand() %39;
			fprintf (mat,"%02d ",matriz[i][j]);
		}
		fprintf (mat,"\n");
	}
	return 0;
}