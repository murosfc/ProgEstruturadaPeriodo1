
/* 4) Considere uma struct que armazena os seguintes dados de um aluno: matrícula,
primeiro nome, nota da P1, nota da P2 e nota da P3. Faça um algoritmo que preencha os
dados de 30 alunos, sendo que a nota da P3 será calculada pelo algoritmo como a média
das outras duas notas. O algoritmo também tem que imprimir a quantidade de alunos
Aprovados e Reprovados, considerando a média para aprovação maior ou igual a 6,0.
Utilize dois procedimentos: um para preencher os dados dos alunos e outro para
imprimir as informações solicitadas. */

#include <stdio.h>
#define TAM 30

struct dados{
	int matricula;
	char nome[20];
	float n1,n2,n3;
};
void ler_dados (struct dados *alunos, FILE *hist);
void print_info (struct dados *alunos);

int main ()
{
	FILE *arq_hist;
	struct dados alunos[TAM];
	arq_hist = fopen ("Alunos.txt","r");
	if (arq_hist == NULL)
	{
		printf ("\nErro na abertura do arquivo\n\n");
		return 0;
	}
	ler_dados (alunos,arq_hist);
	print_info (alunos);
	fclose (arq_hist);
	return 0;
}
void ler_dados (struct dados *alunos, FILE *hist)
{
	int i=0;
	do
	{
		fscanf (hist,"%d %s %f %f",&alunos[i].matricula,&alunos[i].nome,&alunos[i].n1,&alunos[i].n2);
		alunos[i].n3=(alunos[i].n1+alunos[i].n2)/2;
		i++;
	}
	while (!feof (hist));
}
void print_info (struct dados *alunos)
{
	int i=0,cont=0;
	printf ("\nAlunos reprovados:\n");
	for (i=0;i<TAM;i++)
		if (alunos[i].n3<6.0)
		{
			printf ("\n%s - media: %.2f",alunos[i].nome,alunos[i].n3);
			cont++;
		}
	printf ("\nTotal de reprovados %d\n\n",cont);
	cont=0;
	printf ("Alunos aprovados:\n");
	for (i=0;i<TAM;i++)
		if (alunos[i].n3>=6.0)
		{
			printf ("\n%s - media: %.2f",alunos[i].nome,alunos[i].n3);
			cont++;
		}
	printf ("\nTotal de aprovados %d\n\n",cont);
}