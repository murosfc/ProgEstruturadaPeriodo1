/*24) FaÃ§a um algoritmo que leia uma palavra (com no mÃ¡ximo 15 caracteres) e depois embaralhe os caracteres
da mesma, fazendo a sua impressÃ£o ao nal. Por exemplo: recebendo a palavra python, pode ser retornado
npthyo, ophtyn ou qualquer outra combinaÃ§Ã£o possÃ­vel, de forma aleatÃ³ria. Crie e utilize dois procedimentos:
um para ler a palavra e outro para embaralhar e imprimir a mesma ao nal.
Obs. 1: NÃ£o Ã© permitido utilizar qualquer estrutura de dados auxiliar.
Obs. 2: Considere que o usuÃ¡rio digitarÃ¡ somente letras minÃºsculas. */

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void ler(char *p);
void mix (char *p);

int main()
{
	char word[15];
	srand (time(NULL));
	ler (word);	
	printf ("\nPalavra embaralhada: %s\n\n",word);
	return 0;
}

void ler(char *p)
{
	printf ("\nDigite uma palavra com no maximo 15 caracteres: ");
	scanf ("%s", p);
	mix (p);
}
void mix (char *p)
{
	int tam, i, aux;	
	char tmp;
	tam = strlen(p);	
	for (i=0;i<tam;i++)
	{
		aux = rand()%tam;
		if (aux > i);
		{
			tmp=p[i];
			p[i]=p[aux];
			p[aux]=tmp;			
		}
	}	
}

	
