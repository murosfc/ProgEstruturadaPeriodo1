/*2) Considerando a struct do exercício anterior, faça um algoritmo que preencha os
dados da conta bancária de 20 clientes e depois imprima quantos deles têm saldo
bancário de no máximo 3 salários mínimos, onde o salário mínimo é igual a R$ 880,00.
Utilize um procedimento para preencher os dados dos clientes e uma função para
retornar (para a função main) a quantidade de clientes.*/

#include <stdio.h>
#define TAM 2

struct conta{
	char n[20];
	int nc;
	float saldo;
};

void ler_clientes (struct conta *clientes);
int contsalmin (struct conta *clientes);

int main()
{
	struct conta clientes[TAM];
	ler_clientes(clientes);
	printf ("\n%d clientes possui saldo menor que 3 salarios minimos\n\n",contsalmin(clientes));
	return 0;
}
void ler_clientes (struct conta *clientes)
{
	int i;
	for (i=0;i<TAM;i++)
	{
		printf ("Digite nome, numero da conta e salario do funcionario %d:\n",i+1);
		scanf (" %[^\n]s",&clientes[i].n);
		scanf ("%d",&clientes[i].nc);
		scanf ("%f",&clientes[i].saldo);
		system ("clear");
	}
}
int contsalmin (struct conta *clientes)
{
	int i, conta=0;
	for (i=0;i<TAM;i++)
	{
		if (clientes[i].saldo<=(3*880))
			conta++;
	}
	return conta;
}
	