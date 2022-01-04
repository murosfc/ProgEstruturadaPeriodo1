#include <stdio.h>
#include <string.h>

void ler (int vetA[20]);
void cpyinv (int vetA[20], int vetB[20]);

int main ()
{
	int vetorA[20],vetorB[20], i=0;
	ler (vetorA);
	cpyinv (vetorA, vetorB);
	printf ("\nVetor A = %d");
	for (i=0; i<20;i++)
		printf ("%d ",vetorA[i]);
	printf ("\nVetor B = %d");
	for (i=0; i<20;i++)
		printf ("%d ",vetorB[i]);
	return 0;
}
void ler (int vetA[20])
{
	int i=0;
	printf ("Digite um vetor com 20 numeros\n");
	for (i=0;i<20;i++)
	scanf ("%d",&vetA[i]);
}
void cpyinv (int vetA[20],int vetB[20])
{
	int i=0;
	for(i=0; i<20;i++)
		vetB[19-i]=vetA[i];
}