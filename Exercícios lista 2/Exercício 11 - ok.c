/* 11) Faça um algoritmo que verifique se uma dada matriz quadrada 8 x 8 gerada
aleatoriamente com números de 0 até 14 é uma matriz triangular inferior. Em uma
matriz triangular inferior, todos os elementos acima da diagonal principal são iguais a 0.
Os elementos da diagonal principal ou abaixo dela podem assumir valores quaisquer.
Crie e utilize um procedimento para a geração da matriz e uma função para a
verificação. De acordo com o retorno da função deve-se imprimir na função main:
MATRIZ TRIANGULAR INFERIOR ou MATRIZ NAO TRIANGULAR INFERIOR. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ger_mat (float mat[][8]);
int verif (float mat[][8]);

int main ()
{
	float matriz[8][8];
	srand (time(NULL));
	ger_mat (matriz);
	if (verif(matriz)>0)
		printf ("\nMATRIZ NAO TRIANGULAR INFERIOR\n");
	else printf ("\nMATRIZ TRIANGULAR INFERIOR\n");
	return 0;
}
void ger_mat (float mat[][8])
{
	int i,j;
	printf ("\nMatriz gerada:\n");
	for (i=0;i<8;i++)
	{
		for (j=0;j<8;j++)
		{
		    mat[i][j]=rand () % 15;
		    printf ("%.2f\t",mat[i][j]);
            if (j==7)
            printf ("\n");
		}
	}
}
int verif (float mat[][8])
{
	int cont_erro=0;
	for (int i=0;i<8;i++)
		for (int j=i+1;j<8;j++)
			if (mat[i][j]!=0)
				cont_erro++;
	return cont_erro;
}