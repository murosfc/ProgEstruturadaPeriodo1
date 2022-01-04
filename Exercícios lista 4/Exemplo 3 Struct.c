#include <stdio.h>

#define TAM 30

struct dados {
	char nome[50]
	char cargo[20]
	int idade;
	float salario;
};
void lerdados (struct dados *funcionarios);
int somasalM20 (struct dados *funcionarios);
int main 
{
	struct dados funcionarios[TAM];
	lerdados (funcionarios);
	printf ("\n %d Diretores ganham mais que R$ 5.000,00\n\n" somasalM20(funcionarios));
	return 0;
}
void lerdados (struct dados *funcionarios)
{
	int i;
	for (i=0;i<TAM;i++)
	{
		printf ("Digite nome, cargo, idade e salario do funcionario %d:\n",i);
		scanf (" %[^\n]s",&funcionarios[i].nome);
		scanf (" %[^\n]s",&funcionarios[i].cargo);
		scanf ("%d",&funcionarios[i].idade);
		scanf ("%f",&funcionarios[i].salario);
		system ("clear");
	}
}
int somasalM20 (struct dados *funcionarios)
{
	int i, cont=0;
	for (i=0;i<TAM;i++)
	{
		if (funcionarios[i].cargo == "diretor" &&  funcionarios[i].salario >= 5000)
			cont++
	}
	return cont;
}