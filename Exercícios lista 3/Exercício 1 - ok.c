/*
1) Faça um algoritmo que leia de um arquivo chamado "Turma.txt" o nome dos alunos
de uma turma e as suas três notas. Seu algoritmo deve ter como saída um arquivo
chamado "MediasAlunos.txt" que contém os nomes dos alunos e suas respectivas
médias (com duas casas decimais).
- Exemplo de arquivos:
Turma.txt MediasAlunos.txt
- Obs.:
Para declarar uma variável que receba uma palavra:
char palavra[50];
Para ler uma palavra de um arquivo:
fscanf(arqLeitura, “%s”, &palavra);
Para escrever uma palavra em um arquivo:
fprintf(arqEscrita, “%s”, palavra);
- Utilize as dicas desta observação para a leitura e escrita do nome do aluno.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *notas, *medias;
	char aluno[50];
	float n1,n2,n3;
	int i;	
	notas = fopen("Notas.txt","r");
	medias = fopen("MediasAlunos.txt","w");
	if (notas == NULL || medias == NULL)
	{
		printf ("\nErro de abertura de arquivo\n\n");
		return 0;
	}
	do	
	{
		fscanf (notas,"%s %f %f %f",&aluno,&n1,&n2,&n3);
		fprintf(medias,"%s media: %.2f\n",aluno,(n1+n2+n3)/3);
	}
	while (!feof(notas));
	fclose (notas);
	fclose(medias);
	return 0;
}