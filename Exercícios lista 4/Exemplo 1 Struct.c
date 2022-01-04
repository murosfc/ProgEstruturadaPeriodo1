#include <stdio.h>

#define TAM 20

struct dados
{
	char nome[50];
	int idade;
	float salario;
};
void lerdados (struct dados *funcionarios);
int contM30 (struct dados *funcionarios);
int main ()
{
	struct dados funcionarios[TAM];
	lerdados (funcionarios);
	printf ("\n%d funcionarios tem idade maior o igual a 30\n\n", contM30(funcionarios));
	return 0;
}
void lerdados (struct dados *funcionarios)
{
	int i;
	for (i=0;i<TAM;i++)
	{
		printf ("Digite nome, idade e salario do funcionario %d:\n",i+1);
		scanf (" %[^\n]s",&funcionarios[i].nome);
		scanf ("%d",&funcionarios[i].idade);
		scanf ("%f",&funcionarios[i].salario);
		system ("clear");
	}
}
int contM30 (struct dados *funcionarios)
{
	int i, cont=0;
	for (i=0;i<TAM;i++)
	{
		if (funcionarios[i].idade >= 30)
			cont++;
	}
	return cont;
}	