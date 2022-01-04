#include <sdtio.h>
#include <stdlib.h>
#include <time.h>

void ger_mat (float mat[10][4]);
float soma_mat (int x,float mat[10][4]);

int main()
{
	float matriz[10][4];
	int x=0;
	srand (time(NULL));
	ger_mat(matriz);
	printf ("\dDigite o numero da coluna que deseja somar de 1 a 4:\n");
	scanf ("%d",&x);
	printf ("\dSoma dos elementos da coludna %d e: %.2f",x,soma_mat(x,matriz));
	return 0;
}
void ger_mat (float mat[10][4])
{
	for (int i=0;i<10;i++)
		for (int j=0;j<4;j++)
			mat[i][j]=rand() %15 +1;
}
float soma_mat (int x,float mat[10][4])
{
	float soma=0;
	for (int i=0;i<5;i++)
		for (int j=0;j==x-1;j++)
			soma=soma+mat[i][j];
	return soma;
}
		