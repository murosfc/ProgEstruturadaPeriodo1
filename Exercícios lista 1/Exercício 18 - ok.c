#include <stdio.h>
#include <string.h>

void lerfrases (char *f1, char *f2);
void test (char *f1, char *f2);
int main ()
{
	char f1[20],f2[20];
	lerfrases (f1,f2);
	return 0;		
}
void lerfrases (char *f1, char *f2)
{
	printf ("Digite a primeira frase:\n");
	scanf (" %[^\n]s",&f1);
	printf ("Digite a segunda frase:\n");
	scanf (" %[^\n]s",&f2);
	test (&f1,&f2);
}
void test (char *f1, char *f2)
{
	if (strcmp(f1,f2)==0)
	    printf ("\nAs duas frases sao iguais\n\n");
	else if (strlen(f1)==strlen(f2))
		printf ("\nAs duas frases sao de tamanhos iguais. As duas frases possuem conteudo iguais.\n\n");
	else
		printf("\nAs duas frases sao de tamanhos diferentes. As duas frases possuem conteudo distintos.\n\n");
}