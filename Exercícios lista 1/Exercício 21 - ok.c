#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillA (int *vetA);
void fillB (int *vetA,int *vetB);
int fat (int aux);

int main()
{
	int vetorA[20], vetorB[20], i=0;
	fillA (vetorA);
	fillB (vetorA,vetorB);
	printf ("\nVetor A = ");
	for (i=0;i<=20;i++)
	printf ("%d ", vetorA[i]);
	printf ("\nVetor B = ");
	for (i=0;i<=20;i++)
	printf ("%d ", vetorB[i]);
	return 0;
}
void fillA (int *vetA)
{
	int i=0;
	srand(time(NULL));
	for (i=0;i<20;i++);
	vetA[i] = rand() % 10;
}
void fillB (int *vetA,int *vetB)
{
	int aux=0;
	int i=0;
	for (i=0;i<20;i++)
	{
	aux = vetA[i];
	vetB[i]= fat (aux);
	}	
}
int fat (int aux)
{
	int rec;
	for (rec=1;aux>1;aux=aux-1)
		rec = rec*aux;
	return rec;
}