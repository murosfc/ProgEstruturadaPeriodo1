#include <stdio.h>

#define TAM 30

struct dados {
	char nome[50]
	int idade;
	float salario;
};
void lerdados (struct dados *funcionarios);
int somasalM20 (struct dados *funcionarios);
int main 
{
	struct dados funcionarios[TAM];
	lerdados (funcionarios);
	printf ("\n Total do salario dos funcionarios com idade maior o igual a 20\n\n" somasalM20(funcionarios));
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
int somasalM20 (struct dados *funcionarios)
{
	int i;
	float somasal=0;
	for (i=0;i<TAM;i++)
	{
		if (funcionarios[i].idade >= 20)
			somasal+=funcionarios[i].salario;
	}
	return somasal;
}