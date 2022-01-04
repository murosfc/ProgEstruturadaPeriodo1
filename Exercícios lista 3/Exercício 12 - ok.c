/*
12) Considere um arquivo chamado "Matriz5x6.txt" que armazena uma matriz de
tamanho 5 x 6 de números inteiros. Faça um algoritmo para ler essa matriz do arquivo,
realizar a soma dos elementos da segunda, quarta e sexta colunas e imprimir o resultado
da soma no arquivo chamado "Soma.txt". A matriz que receberá os valores lidos do
arquivo deve ser criada na função main( ).
Utilize uma função para realizar o cálculo da soma (retornando esse valor para a
função main( )) e dois procedimentos: um para ler a matriz do arquivo de entrada e
outro para imprimir no arquivo de saída o resultado da soma.
*/
#include <stdlib.h>
#include <stdio.h>

void lermat (FILE *matriz,int mat[5][6]);
void prntmat (FILE *somatriz,int soma);
int somat (int mat[5][6], int *soma);

int main ()
{
	FILE *matriz, *somatriz;
	int mat[5][6],soma=0;
	matriz = fopen ("Matriz5x6.txt","r");
	somatriz = fopen ("Soma.txt","w");
	if (matriz == NULL || somatriz == NULL)
	{
		printf ("\nErro na abertura do arquivo.\n\n");
		return 0;
	}
	lermat (matriz, mat);
	somat (mat,&soma);
	prntmat (somatriz,soma);
	fclose (matriz);
	fclose (somatriz);
	return 0;
}
void lermat (FILE *matriz,int mat[5][6])
{
	int i,j;
	for (i=0;i<5;i++)
		for (j=0;j<6;j++)
			fscanf (matriz,"%d",&mat[i][j]);
}
int somat (int mat[5][6], int *soma)
{
	int i,j;
	for (i=0;i<5;i++)
		for (j=1;j<6;j+=2)
			*soma+=mat[i][j];
	return *soma;
}
void prntmat (FILE *somatriz,int soma)
{
	fprintf (somatriz,"Soma = %d",soma);
}