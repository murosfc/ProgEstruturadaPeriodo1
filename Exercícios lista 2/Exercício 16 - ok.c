#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ger_mat (float mat[4][4]);
float soma_mat (float mat[4][4]);

int main()
{
	float matriz[4][4];
	srand (time(NULL));
	ger_mat(matriz);
	printf ("\dSoma dos elementos que estao na diagonal secundaria: %.2f",soma_mat(matriz));
	return 0;
}
void ger_mat (float mat[4][4])
{
	for (int i=0;i<4;i++)
		for (int j=0;j<4;j++)
			mat[i][j]=rand();
}
float soma_mat (float mat[4][4])
{
	float soma=0;
	for (int i=0;i<4;i++)
		for (int j=0;j<0;j++)
		{
			if (i+j ==4)
			soma=soma+mat[i][j];
		}
	return soma;
}