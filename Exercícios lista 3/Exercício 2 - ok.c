/*
Suponha que cada aluno faça três provas, como mostra cada linha do arquivo
"Notas.txt". Faça um algoritmo para gerar o arquivo "Situacao.txt", onde cada linha
contenha a média final do aluno e sua situação: “A” – Aprovado (média igual ou
superior a 5.0) ou “R” – Reprovado (média inferior a 5.0).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *notas, *situacao;
	float n1,n2,n3,media;
	notas = fopen("Notas.txt","r");
	situacao = fopen("Situacao.txt","w");
	if (notas == NULL || situacao == NULL)
	{
		printf ("\nErro de abertura de arquivo\n\n");
		return 0;
	}
	do
	{
		fscanf (notas,"%f %f %f",&n1,&n2,&n3);
		media=(n1+n2+n3)/3;
		if (media>=5)
		fprintf(situacao,"%.2f A\n",media);
		else fprintf(situacao,"%.2f R\n",media);		
	}
	while (!feof(notas));
	fclose (notas);
	fclose(situacao);
	return 0;
}