#include <sdtio.h>
#include <stdlib.h>
#include <time.h>

void ger_mat (float mat[6][6]);
float mult_mat (float mat[6][6]);

int main()
{
	float matriz[6][6];
	srand (time(NULL));
	ger_mat(matriz);
	printf ("\dMultiplicacao dos elementos que estao abaixo da diagonal principal: %.2f",mult_mat(matriz);
	return 0;
}
void ger_mat (float mat[6][6])
{
	for (int i=0;i<6;i++)
		for (int j=0;j<6;j++)
			mat[i][j]=rand() %10 +1;
}
float mult_mat (float mat[6][6])
{
	float mult=1;
	for (int i=0;i<6;i++)
		for (int j=0;j<i-1;j++)
			mult=mult*mat[i][j];
	return mult;
}
		