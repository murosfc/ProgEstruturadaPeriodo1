/*
Considere um arquivo chamado "Distancias.txt" que armazena (em cada linha) o
nome de uma cidade (sem espaços) e a distância (em km) entre a mesma e Campos dos
Goytacazes. Imagine que um usuário deseja saber quantos litros de combustível e
quanto custaria abastecer tais litros para ele chegar a uma das cidades partindo de
Campos. Assim, faça um algoritmo para ler (pelo teclado) a cidade de destino, o
consumo do veículo do usuário (em km/l), o valor do litro de combustível e depois gerar
um arquivo chamado "Gastos.txt" informando o nome da cidade de destino, quantos
litros serão necessários para a viagem e o valor para abastecer tais litros.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *distancia,*gastos;
	float cons,valor,dist;
	char destino[50],destfile[50];
	distancia = fopen ("Distancias.txt","r");
	gastos = fopen ("Gastos.txt","w");
	if (distancia == NULL || gastos == NULL)
	{
		printf ("\nErro na abertura do arquivo.\n\n");
		return 0;
	}
	printf ("\nDigite o consumo do veiculo em Km/l: ");
	scanf ("%f",&cons);
	printf ("\nDigite o valor por litro do combustivel: ");
	scanf ("%f",&valor);
	printf ("\nDigite a cidade destino, sem espacos: ");
	scanf ("%s",&destino);
	do
	{
		fscanf (distancia,"%s %f",&destfile,&dist);
		if (strcmp(destino,destfile)==0)
			fprintf (gastos,"%s  %.2f litros R$ %.2f\n",destino,(dist/cons),(dist/cons)*valor);
	}
	while (!feof (distancia));
	fclose (distancia);
	fclose (gastos);
	return 0;
}	