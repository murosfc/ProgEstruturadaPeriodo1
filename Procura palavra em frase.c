#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contapalavra (char str[],char wrd[]);

int main ()
{
	char str[]="Na cabana tinha um saco de banana baiana", wrd[]="Ana";
	printf ("A palavra %s aparece %d vezes na frase: \n%s\n",wrd,contapalavra(str,wrd),str);
	return 0;
}
int contapalavra (char str[],char wrd[])
{
	int i,j,contaux,cont=0;
	for (i=0;i<strlen(str);i++)
	{
		if (str[i] == toupper(wrd[i]) || str[i] == tolower(wrd[i]))
		{
			contaux=1;			
			for (j=i+1;j<strlen(wrd);j++)
			{
				if (str[j] == toupper(wrd[j]) || str[j] == tolower(wrd[j]))
				contaux++;
			}
			if (contaux == strlen(wrd))
				cont++;
		}
	}
	return cont;
}