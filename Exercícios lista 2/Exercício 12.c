#include <sdtio.h>
#include <stdlib.h>
#include <time.h>

void ger_mat (float mat[][10]);
void print_mat (float mat[][10]);

int main()
{
	float matriz[10][10];
	srand(time(NULL);
	ger_mat(matriz);
	print
	return 0;
}
void ger_mat (float mat[][10])
{
	for (int i=0;i<10;i++)
		for (int j=0;j<10;j++)
		{
			if(i<j)
			mat[i][j]=2*i+7*j+2;
		else if(i==j)
			mat[i][j]=3*i^2-1;
		else mat[i][j]=4*i^3+1;
		}
}
void print_mat (float mat[][10])
{
	printf ("\nMatriz gerada:\n");
	for (int i=0;i<10;i++)
		for (int j=0;j<10;j++)
		{
			printf (" %.2f ",mat[i][j]);
			if (j==9)
				printf ("\n);
		}
}
		}
	