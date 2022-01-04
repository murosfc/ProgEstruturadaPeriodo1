#include <stdio.h>
#include <stdlib.h>

void ler_notas (float mat[][3]);
void imp_notas(float mat[][3]);

int main()
{
	float matriz[10][3];
	ler_notas(matriz);
	imp_notas(matriz);
	return 0;
}
void ler_notas (float mat[][3])
{
	int i=0,j=0;
	printf ("\nDigite as 3 notas dos alunos\n");
	for (i=0;i<10;i++)
		for (j=0;j<3;j++)
		{
			printf ("\nDigite a nota %d do aluno %d:\n",j+1,i+1);
			scanf ("%f",&mat[i][j]);
		}
}
void imp_notas(float mat[][3])
{
	float menor,maior;
	int i=0,j=0;
	for (i=0;i<10;i++)
	{
		menor=11;
		1maior=-1;
		for (j=0;j<3;j++)
		{
			if (mat[i][j]<menor)
			menor=mat[i][j];
			if (mat[i][j]>maior)
			maior=mat[i][j];				
		}
		printf ("\nAluno %d, menor nota: %.2f, maior nota %.2f\n",i,menor,maior);
	}
}
			