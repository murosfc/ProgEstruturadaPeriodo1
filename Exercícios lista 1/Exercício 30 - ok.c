#include <stdlib.h>
#include <stdio.h>

#define TAM 40

void ler (int *V1, int *V2);
int comp (int X, int Y,int *V1, int *V2);

int main ()
{
	int v1[TAM],v2[TAM],x,y;
	ler (v1,v2);
	printf ("\nDigite o valor de x, diferente de 0:\n");
	do scanf ("%d",&x);
	while (x=0);
	printf ("\nDigite o valor de y, diferente de 0:\n");
	do scanf ("%d",&y);
	while (y=0);
	if (comp (x,y,v1,v2))
		printf ("\nCondicao proposta e verdadeira");
	else printf ("\nCondicao proposta nao e verdadeira");
}
void ler (int *V1, int *V2)
{
	int i=0;
	printf ("\nDigite o vetor 1 com %d numeros inteiros:\n",TAM);
	for (i=0;i<TAM;i++)
		scanf ("%d",&V1[i]);
	printf ("\nDigite o vetor 2 com %d numeros inteiros:\n",TAM);
	for (i=0;i<TAM;i++)
		scanf ("%d",&V2[i]);
}
int comp (int X, int Y,int *V1, int *V2)
{
	int i=0,sumx=0,sumy=0;
	for (i=2;i<TAM-1;i=i+2)
		sumx+=X*V1[i];
	for (i=2;i<TAM-1;i=i+2)
		sumy+=Y*V2[i];
	if (sumx<=sumy)
		return 1;
	else return 0;
}
	
		