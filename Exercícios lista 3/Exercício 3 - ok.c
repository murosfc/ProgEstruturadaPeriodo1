/*
3) Faça um algoritmo que leia de um arquivo chamado "Medias.txt" o nome dos alunos
e as suas respectivas médias. Seu algoritmo deve ter como saída um arquivo chamado
"Aprovados.txt", que contém os nomes dos alunos com média igual ou superior a 7.0, e
outro arquivo chamado "Reprovados.txt", que contém os nomes dos alunos com média
inferior a 7.0.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *medias, *aprovados, *reprovados;
	char aluno[15];
	float nota;
	medias = fopen ("Medias.txt","r");
	aprovados = fopen ("Aprovados.txt","w");
	reprovados = fopen ("Reprovados.txt","w");
	if (medias==NULL || aprovados==NULL || reprovados==NULL)
	{
		printf ("\nErro na abertura do arquivo.\n\n");
		return 0;
	}
	do
	{
		fscanf (medias,"%s %f",&aluno,&nota);
		if (nota>=7)
			fprintf (aprovados,"%s %.2f\n",aluno,nota);
		else fprintf (reprovados,"%s %.2f\n",aluno,nota);
	}
	while (!feof(medias));
	return 0;
}