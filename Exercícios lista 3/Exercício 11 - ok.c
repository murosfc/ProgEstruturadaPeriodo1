/*
11) Considere um arquivo chamado "Matriz4x5.txt" que armazena uma matriz de
tamanho 4 x 5 de números inteiros. Faça um algoritmo para ler essa matriz do arquivo,
trocar a segunda coluna com a quinta e imprimir a nova matriz no arquivo chamado
"MatrizAlterada.txt". A matriz que receberá os valores lidos do arquivo deve ser
criada na função main( ) e não deve ser utilizada uma matriz auxiliar para realizar a
troca das colunas.
Utilize três procedimentos: um para ler a matriz do arquivo de entrada, outro para
realizar a troca das colunas e um terceiro para imprimir no arquivo de saída a matriz
alterada.
*/
#include <stdlib.h>
#include <stdio.h>

void lermat (FILE *mat, int matriz[][5]);
void trocacol (int matriz[][5]);
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
	trocacol (matriz);
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
void trocacol (int matriz[][5])
{
	int swap=0,i;
	for (i=0;i<5;i++)
	{
		swap=matriz[i][1];
		matriz[i][1]=matriz[i][4];
		matriz[i][4]=swap;
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