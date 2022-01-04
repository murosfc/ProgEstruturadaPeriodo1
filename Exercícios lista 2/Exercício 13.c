#include <sdtio.h>
#include <stdlib.h>
#include <time.h>

void ger_mat (float mat[5][5]);
float soma_mat (float mat[5][5]);

int main()
{
	float matriz[5][5];
	srand (time(NULL));
	ger_mat(matriz);
	printf ("\dSoma dos elementos que estao acima da diagonal principal: %.2f",soma_mat(matriz);
	return 0;
}
void ger_mat (float mat[5][5])
{
	for (int i=0;i<5;i++)
		for (int j=0;j<5;j++)
			mat[i][j]=rand() %40 +1;
}
float soma_mat (float mat[5][5])
{
	float soma=0;
	for (int i=0;i<5;i++)
		for (int j=i+1;j<5;j++)
			soma=soma+mat[i][j];
	return soma;
}
			
	