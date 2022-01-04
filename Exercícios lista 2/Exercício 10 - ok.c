#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int check_ident(float MatAxB[][6]);
float gera_mat(float MatA[][6],float MatB[][6]);
float mult_mat (float MatA[][6],float MatB[][6],float MatAxB[][6]);

int main ()
{
	float MatA[6][6],MatB[6][6],MatAxB[6][6];
	srand (time(NULL));
	gera_mat (MatA,MatB);
	if (check_ident(MatAxB)>0)
		printf ("\nB NAO E INVERSA DE A.\n");
	else printf ("\nB E INVERSA DE A.\n");
	return 0;
}
float gera_mat(float MatA[][6],float MatB[][6])
{
	int i=0,j=0;
	for (i=0;i<6;i++)
		for (j=0;j<6;j++)
		{
			MatA[i][j]=rand() % 10 +1;
			MatB[i][j]=rand() % 10 +1;
		}
}
float mult_mat (float MatA[][6],float MatB[][6],float MatAxB[][6])
{
	int i=0,j=0,k=0;
	for(i=0; i<6; i++)
            for(j= 0; j<6; j++)
			{
                MatAxB[i][j]=0;
				for(k=0; k<6; k++)
				{
                    MatAxB[i][j] = MatA[i][j] + MatA[i][k] * MatB[k][j];
				}
			}
}
int check_ident(float MatAxB[][6])
{
	int i=0,j=0,cont_erro=0;
	for (i=0;i<6;i++)
		for (j=0;j<6;i++)
		{
			if (i==j && MatAxB[i][j]!=1)
				cont_erro++;
			if (i!=j && MatAxB[i][j]!=0)
				cont_erro++;
		}
	return cont_erro;
}