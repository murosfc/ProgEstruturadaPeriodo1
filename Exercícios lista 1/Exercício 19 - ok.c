#include <stdio.h>
#include <string.h>

void ler(char *str);
int tst(char *str);

int main ()
{
	char palavra[15];
	ler(palavra);
	return 0;
}
void ler(char *str)
{
	int aux=0;
	printf ("Digite a palavra:\n");
	scanf ("%s",&str);
	aux=tst(&str);
	if (aux==1)
	printf ("\nA palavra digitada e Palíndrome");
	else printf ("\nA palavra digitada nao e Palíndrome");
}
int tst(char *str)
{	
	int aux=0,i=0,cont=0;
	aux=strlen (str);
	for (i=0;i<aux;i++)
	{
	    str[i]=toupper(str[i]);
	}
	for (i=0;i<aux;i++)
	{
		if (str[i]==str[aux-1-i])
			cont++;
	}
	if (cont==aux)
		return 1;
	else return 0;	
}