/* 5) Considerando a struct do exercício anterior, faça um algoritmo que preencha os
dados de 30 alunos, sendo que a nota da P3 será calculada pelo algoritmo como a média
das outras duas notas, e depois imprima as três notas de um aluno cujo nome será
informado pelo teclado na função main. Caso a turma tenha mais de um aluno com o
mesmo nome, imprima as três notas de todos eles. Utilize dois procedimentos: um para
preencher os dados dos alunos e outro para imprimir as informações solicitadas. */

#include <stdio.h>
#include <string.h>

#define TAM 30

struct dados{
	int matricula;
	char nome[20];
	float n1,n2,n3;
};
void ler_dados (struct dados *alunos, FILE *hist);
void print_info (struct dados *alunos, char *nome_aluno);

int main ()
{
	FILE *arq_hist;
	struct dados alunos[TAM];
	char nome_aluno[20];
	arq_hist = fopen ("Alunos.txt","r");
	if (arq_hist == NULL)
	{
		printf ("\nErro na abertura do arquivo\n\n");
		return 0;
	}
	ler_dados (alunos,arq_hist);
	do
	{
		printf ("\nDigite o nome do aluno que deseja consultar as notas ou digite 0 para sair:\n");
		scanf ("%s",&nome_aluno);
		if (nome_aluno != 0)
			print_info (alunos,nome_aluno);
	}
	while (nome_aluno!=0);	
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
void print_info (struct dados *alunos, char *nome_aluno)
{
	int i;
	for (i=0;i<TAM;i++)
	{
		if (strcmp (nome_aluno,alunos[i].nome) == 0)
			printf ("\n%s nota 1: %.2f, nota 2: %.2f, media: %.2f\n",alunos[i].nome,alunos[i].n1,alunos[i].n2,alunos[i].n3);
	}
}