/*
10) Considere um arquivo chamado "Matriz4x5.txt" que armazena uma matriz de
tamanho 4 x 5 de números inteiros. Faça um algoritmo para ler essa matriz do arquivo,
trocar a primeira linha com a quarta e imprimir a nova matriz no arquivo chamado
"MatrizAlterada.txt". A matriz que receberá os valores lidos do arquivo deve ser
criada na função main( ) e não deve ser utilizada uma matriz auxiliar para realizar a
troca das linhas.
Utilize três procedimentos: um para ler a matriz do arquivo de entrada, outro para
realizar a troca das linhas e um terceiro para imprimir no arquivo de saída a matriz
alterada.
*/
#include <stdlib.h>
#include <stdio.h>

void lermat (FILE *mat, int matriz[][5]);
void trocalin (int matriz[][5]);
void prnt (FILE *matalt,int matriz[][5]);

int main ()
{
	FILE *mat,*matalt;
	int matriz[4][5];
	mat = fopen ("Matriz4x5.txt","r");
	matalt = fopen ("MatrizAlterada.txt","w");
	if (mat==NULL || matalt==NULL)
	{
		printf ("\nErro na abertura do arquivo\n\n");
		return 0;
	}
	lermat (mat,matriz);
	trocalin (matriz);
	prnt (matalt,matriz);
	return 0;
}
void lermat (FILE *mat, int matriz[][5])
{
	int i,j;
	for (i=0;i<4;i++)
		for (j=0;j<5;j++)
			fscanf (mat,"%d ",&matriz[i][j]);
}
void trocalin (int matriz[][5])
{
	int swap=0,j;
	for (j=0;j<5;j++)
	{
		swap=matriz[0][j];
		matriz[0][j]=matriz[3][j];
		matriz[3][j]=swap;
	}
}
void prnt (FILE *matalt,int matriz[][5])
{
	int i,j;
	for (i=0;i<4;i++)
	{
		for (j=0;j<5;j++)
			fprintf (matalt,"%02d ",matriz[i][j]);
		fprintf (matalt,"\n");
	}
}