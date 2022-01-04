/*
 Faça um algoritmo para, primeiro, ler pelo teclado todos os 30 números naturais (maiores do que 1) 
 da matriz M4x5 e, em seguida, imprimir na tela a quantidade de números primos que M possui. 
 Crie e utilize dois procedimentos: um para ler a matriz e outro para calcular e imprimir a quantidade de números primos.
 Crie e utilize também uma função que retorna 1, se um número natural for primo, ou retorna 0, caso contrário. 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define lin 4
#define col 5

void ler_mat (int matriz[][col]);
void imp_primos (int matriz[][col]);
int checa_primos (int envnum);

int main ()
{
	int mat[lin][col],i,j;
	ler_mat(mat);
	imp_primos(mat);
	return 0;
}
void ler_mat (int matriz[][col])
{
	int i=0,j=0;
	printf ("\nDigite os elementos da matriz: ");
	for (i=0;i<lin;i++)
		for (j=0;j<col;j++)
		{
			printf("\n Elemento linha %d coluna %d: ",i+1,j+1);
			scanf ("%d",&matriz[i][j]);
		}
}
void imp_primos (int matriz[][col])
{
	int i=0,j=0,envianum=0, cont=0;
	printf ("\nQuantidade de numeros primos na matriz: ");
	for (i=0;i<lin;i++)
		for (j=0;j<col;j++)
		{
			envianum=matriz[i][j];
			cont=cont+checa_primos(envianum);
		}
	printf ("%d\n",cont);
}
int checa_primos (int envnum)
{
	int i;
	for (i=2;i<envnum;i++)
	    if (envnum % i  == 0)
            return 0;
	return 1;
}
	
	
