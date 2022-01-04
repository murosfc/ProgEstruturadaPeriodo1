#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define TAM 50

void fill (int *V);
void mod (int *V);
void prnt (int cv,int *V);

int main()
{
	int v[TAM],cv=0;
	srand (time(NULL));
	fill (v);
	prnt (cv, v);
	mod (v);
	cv=1;
	prnt (cv, v);
	return 0;
}
void fill (int *V)
{
	int i=0;
	for (i=0;i<TAM;i++)
		V[i]=rand() % 100 +1;
}
void prnt (int cv,int *V)
{
	int i=0;
	if (cv==0)
	printf ("\nVetor V original: \n");
	else printf ("\nVetor V modificado: \n");
	for (i=0;i<TAM;i++)
		printf ("\t%d",V[i]);
}
void mod (int *V)
{
	int i=0,j=0;
	for (i=0;i<TAM;i++)
	{
		for (j=0;j<TAM;j++)
		{
			if (i != j)
				V[i]+=V[j];
		}
	}
}