/*
13) Considere um arquivo chamado "Cidades.txt" que armazena em cada linha o nome
de uma cidade e o seu número de habitantes. Faça um algoritmo para ler esse arquivo e
criar um arquivo chamado "Populacao.txt" contendo o nome da cidade mais populosa
seguida pelo seu número de habitantes.
- Obs.: A função strcpy(str1,str2) da biblioteca string.h copia uma string para outra.
Ela copia a string str2 para a string str1.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	FILE *cidades,*mpopul;
	char cidade[50],mcid[50];
	int popul,mpop=0;
	cidades = fopen ("Cidades.txt","r");
	mpopul = fopen ("Populacao.txt","w");
	if (cidades==NULL || mpopul==NULL)
	{
		printf ("\nErro na abertura do arquivo.\n\n");
		return 0;
	}
	do
	{
		fscanf (cidades,"%s %d",&cidade,&popul);
		if (popul>mpop)
		{
			mpop=popul;
			strcpy (mcid,cidade);
		}
	}
	while (!feof(cidades));
	fprintf (mpopul,"%s %d",mcid,mpop);
	fclose (cidades);
	fclose (mpopul);
	return 0;
}