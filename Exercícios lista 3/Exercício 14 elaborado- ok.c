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

#define T 20

int main()
{
	FILE *arqnomes,*maiores,*menores;
	char nome[T];
	int dia,mes,ano,idade=0;	
	struct tm *data_hora_atual;    //ponteiro para struct que armazena data e hora   
    time_t segundos; //variável do tipo time_t para armazenar o tempo em segundos   
	time(&segundos); //obtendo o tempo em segundos   
    data_hora_atual = localtime(&segundos); //para converter de segundos para o tempo local   
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
		fscanf (arqnomes,"%s %d/%d/%d",&nome,&dia,&mes,&ano);
		if (mes>data_hora_atual->tm_mon+1 || (mes==data_hora_atual->tm_mon && dia>data_hora_atual->tm_mday))
			idade = data_hora_atual->tm_year+1900-ano;
		else idade = data_hora_atual->tm_year+1900-ano-1;
		if(idade>=18)
			fprintf (maiores,"%s - %d anos\n",nome,idade);
		else fprintf (menores,"%s - %d anos\n",nome,idade);
	}
	fclose (arqnomes);
	fclose (maiores);
	fclose (menores);
	return 0;
}