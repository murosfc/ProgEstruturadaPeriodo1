/* 15) Considere uma struct que armazena o primeiro nome, a idade, o salário e o cargo de
10 funcionários de uma empresa. Faça um algoritmo que imprima os funcionários em
ordem não-decrescente pela idade utilizando o algoritmo SelectionSort. Utilize três
procedimentos: um para preencher os dados dos funcionários, outro para realizar a
ordenação e um terceiro para imprimir os dados depois da ordenação. */

#include <stdio.h>
#include <string.h>

#define T 10

struct func{
	char nome [15];
	int idade;
	float salario;
	char cargo [15];
};

void preencher (struct func *registro);
void ordenar (struct func *registro);
void print (struct func *registro);

int main ()
{
	struct func reg[T];
	preencher (reg);
	ordenar (reg);
	print (reg);
	return 0;
}
void preencher (struct func *registro)
{
	int i;
	for (i=0;i<T;i++)
	{
		printf ("\nDigite o nome do funcionario %d: ",i+1);
		scanf ("%s", &registro[i].nome);
		printf ("Digite a idade do funcionario: %d: ",i+1);
		scanf ("%d", &registro[i].idade);
		printf ("Digite o salario do funcionario: %d: ",i+1);
		scanf ("%f", &registro[i].salario);
		printf ("Digite o cargo do funcionario: %d: ",i+1);
		scanf ("%s", &registro[i].cargo);
	}
}
void ordenar (struct func *registro)
{
	int i,j,maior,swapi;
	char swapc[15];
	float swapf;
	for (i=0;i<T-1;i++)
	{
		maior=i;
	for (j=i;j<T;j++)
		if (registro[j].idade>registro[maior].idade)
			maior=j;
	strcpy (swapc,registro[i].nome);
	strcpy (registro[i].nome,registro[maior].nome);
	strcpy (registro[maior].nome,swapc);
	swapi=registro[i].idade;
	registro[i].idade=registro[maior].idade;
	registro[maior].idade=swapi;
	swapf=registro[i].salario;
	registro[i].salario=registro[maior].salario;
	registro[maior].salario=swapf;
	strcpy (swapc,registro[i].cargo);
	strcpy (registro[i].cargo,registro[maior].cargo);
	strcpy (registro[maior].cargo,swapc);
	}
}
void print (struct func *registro)
{
	int i;
	for (i=0;i<T;i++)
	{
		printf ("\nFuncionario %d - Nome: %s\, Idade: %d, Salario: %f, Cargo: %s\n",i,registro[i].nome,registro[i].idade,registro[i].salario,registro[i].cargo);
	}
}
		
		