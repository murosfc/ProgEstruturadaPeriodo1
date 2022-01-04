/*

4) Considere um arquivo chamado "Matriz4x4.txt" que armazena uma matriz
quadrada de ordem 4 com números inteiros. Faça um algoritmo para ler esta matriz do
arquivo e criar outro arquivo chamado "Transposta.txt" que conterá a matriz transposta
da matriz lida.
- Obs.: Utilize um procedimento para gerar a matriz transposta.
*/
#include <stdio.h>
#include <stdlib.h>

void transp_mat(int mat[4][4], FILE *transposta);

int main()
{
	FILE *matriz,*transposta;
	int i,j;
	int mat[4][4];
	matriz=fopen("Matriz4x4.txt","r");
	transposta=fopen("Transposta.txt","w");
	if (matriz==NULL || transposta==NULL)
	{
		printf ("\nErro ao abrir o arquivo.\n\n");
		return 0;
	}
	for( i=0; i<4; i++)
		for( j=0; j<4; j++)
			fscanf(matriz,"%d", &mat[i][j]);
	transp_mat (mat,transposta);
	fclose (matriz);
	fclose (transposta);
	return 0;
}
void transp_mat(int mat[4][4], FILE *transposta)
{
	int i,j;
	for( i=0; i<4; i++)
	{
		for( j=0; j<4; j++)
			fprintf (transposta,"%d ",mat[j][i]);
		fprintf (transposta,"\n");
	}
}