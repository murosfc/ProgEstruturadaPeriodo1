/* 1) Considere uma struct que armazena os seguintes dados de uma conta bancária:
número da conta, o primeiro nome do cliente e saldo. Faça um algoritmo que preencha
os dados da conta bancária de 20 clientes e depois imprima quantos deles têm saldo
bancário maior do que R$ 1.000,00. */

#include <stdio.h>
#define TAM 20
struct conta{
	char n[20];
	int nc;
	float saldo;
};
void ler (struct conta *clientes, FILE *arqcontas);
int contsal (struct conta *clientes);
int main ()
{
	FILE *arqcontas; 
	struct conta clientes[TAM];
	arqcontas=fopen("Contas.txt","w");
	if (arqcontas == NULL)
	{
		printf ("Erro na abertura do arquivo");
		return 0;
	}
	ler (clientes,arqcontas);
	printf ("\n%d clientes possuem saldo maior que R$ 1000.00\n\n",contsal (clientes));
	fprintf (arqcontas,"\n%d clientes possuem saldo maior que R$ 1000.00\n\n",contsal (clientes));
	fclose (arqcontas);
	return 0;
}
void ler (struct conta *clientes, FILE *arqcontas)
{
	int i;
	for (i=0;i<TAM;i++)
	{
		printf ("\nDigite o numero da conta %d: ",i+1);
		scanf ("%d",&clientes[i].nc);
		fprintf (arqcontas,"\nDigite o numero da conta %d: ",i+1);
		fprintf (arqcontas,"%d",clientes[i].nc);
		printf ("\nDigite o primeiro nome do cliente %d: ",i+1);		
		scanf ("%s",&clientes[i].n);
		fprintf (arqcontas,"\nDigite o primeiro nome do cliente %d: ",i+1);
		fprintf (arqcontas,"%s",clientes[i].n);
		printf ("\nDigite o saldo em conta do cliente %d: ",i+1);		
		scanf ("%f",&clientes[i].saldo);
		fprintf (arqcontas,"\nDigite o saldo em conta do cliente %d: ",i+1);
		fprintf (arqcontas,"%.2f",clientes[i].saldo);
		system ("clear");
	}
}
int contsal (struct conta *clientes)
{
	int contsal=0,i;
	for (i=0;i<TAM;i++)
		if (clientes[i].saldo >1000)
			contsal++;
	return contsal;
}