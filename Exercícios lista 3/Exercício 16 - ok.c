/*
16) Considere um arquivo chamado "Palavras.txt" que armazena em cada linha uma
palavra de no máximo 15 caracteres. Faça um algoritmo para ler pelo teclado uma
palavra (também de no máximo 15 caracteres) e imprimir o número de vezes que essa
palavra aparece no arquivo.
- Obs.: Utilize a função strcmp(str1,str2) da biblioteca string.h para comparar as
palavras. Esta função retorna 0 (zero) se str1 é igual a str2.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *palavras;
	char s_word[15],temp[15];
	int cont=0;
	palavras = fopen("Palavras.txt", "r");
	if(palavras == NULL)
	{
		printf ("\nErro na abertura do arquivo! \n\n");
		return 1;
	}
	printf ("\nDigite a palavra que deseja buscar no Arquivo: ");
	scanf ("%s",s_word);
	
	fscanf (palavras, "%s", &temp);
	while (!feof(palavras))
	{
		if (strcmp(temp,s_word)==0)
			cont++;
		fscanf (palavras, "%s", &temp);
	}
	printf ("\nA palavra digitada foi encontrada %d vezes no arquivo.\n\n",cont);
	fclose (palavras);
	return 0;
}

	
	