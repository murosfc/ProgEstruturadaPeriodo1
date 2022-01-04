#include <stdlib.h>
#include <stdio.h>

#define n 30
void ler (int *V);
int calc (int k,int *V);

int main ()
{	
int v[n], tot, K=0;
ler(v);
do
{
	printf ("\n Digite um numero de 1 a 4:\n");
	scanf ("%d",&K);
}
while (1>K>4);
tot= calc(K,v);
printf ("\nMaior somatório = %d",tot);
return 0;
}
void ler (int *V)
{
	int i=0;
	printf ("\nDigite um vetor de %d elementos:\n",n);
	for (i=0;i<n;i++)
		scanf ("%d",&V[i]);
}
int calc (int k,int *V)
{
	int i=0,j=0,sum,msum=0;
	for (i=0;i<n-k;i++)
	{
		for (j=i;j<i+k-1;j++)
			sum += V[j];
	if (sum>msum)
		msum=sum;
	}
	return msum;
}
		



