/*
15) Faça um algoritmo para imprimir o número de palavras (de no máximo 20
caracteres) presentes no arquivo "Texto.txt". Considere que o arquivo não possui
qualquer número, somente palavras.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *palavras;
	int cont=1;
	char word[20];
	palavras = fopen("Texto.txt", "r");
	if(palavras == NULL)
	{
		printf ("\nErro na abertura do arquivo! \n\n");
		return 1;
	}
	fscanf (palavras, "%s", &word);
	while (!feof(palavras))
	{
		cont++;
		fscanf (palavras, "%s", &word);
	}
	printf ("\nO arquivo contém %d palavras.\n\n",cont);
	fclose (palavras);
	return 0;
}