/*
14) Considere um arquivo chamado "Pessoas.txt" que armazena em cada linha o nome
de uma pessoa e o seu ano de nascimento. Faça um algoritmo para ler esse arquivo e
criar dois outros arquivos: um chamado "Maiores.txt", que contém em cada linha o
nome e a idade das pessoas maiores de idade (idade ≥ 18 anos) e outro chamado
"Menores.txt", que contém em cada linha o nome e a idade das pessoas menores de
idade (idade < 18 anos).
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define anoatual 2019

int main()
{
	FILE *arqnomes,*maiores,*menores;
	char nome[20];
	int ano;		  
	arqnomes = fopen ("Pessoas.txt","r");
	maiores = fopen ("Maiores.txt", "w");
	menores = fopen ("Menores.txt", "w");
	if (arqnomes == NULL || maiores == NULL || menores == NULL)
		{
		printf ("\nErro na abertura do arquivo! \n\n");
		return 1;
	}	
	while (!feof(arqnomes))
	{
		fscanf (arqnomes,"%s %d",nome,ano);
		if (anoatual-ano>=18)
			fprintf (maiores,"%s - %d anos\n",nome,anoatual-ano);
		else fprintf (menores,"%s - %d anos\n",nome,anoatual-ano);
	}
	fclose (arqnomes);
	fclose (maiores);
	fclose (menores);
	return 0;
}
	