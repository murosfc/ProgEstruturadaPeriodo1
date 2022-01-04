#include <stdio.h>
#include <time.h>

void bbsort (int *vet[], int TAM);

int main()
{
	int i=0, vetA[5000], vetB[10000],vetC[20000],vetD[30000], TAM=0;
	FILE *A,*B,*C,*D,*OrdA,*OrdB,*OrdC,*OrdD;
	time_t start,end;
	A=fopen ("A.txt","r");
	B=fopen ("B.txt","r");
	C=fopen ("C.txt","r");
	D=fopen ("D.txt","r");
	OrdA=fopen ("Ordenado-A.txt","w");
	OrdB=fopen ("Ordenado-B.txt","w");
	OrdC=fopen ("Ordenado-C.txt","w");
	OrdD=fopen ("Ordenado-D.txt","w");
	if (A==NULL || B==NULL || C==NULL || D==NULL)
	{
		printf ("\nErro na abertura do arquivo.\nCertifique-se que os arquivos A.txt, B.txt, C.txt e D.txt estejam na pasta do programa e tente novamente");
		return 0;
	}
	do
	{
		fscanf(A,"%d",&vetA[i]);
		i++;		
	}
	while (!feof(A));
	i=0;
	do
	{
		fscanf(B,"%d",&vetB[i]);
		i++;
	}
	while (!feof(B));
	i=0;
	do
	{	
		fscanf(C,"%d",&vetC[i]);
		i++;
	}
	while (!feof(C));
	i=0;
	do
	{		
		fscanf(D,"%d",&vetD[i]);
		i++;
	}
	while (!feof(D));
	//Ordenar, calcular tempo e imprimir o Vetor A
	start = time(NULL); 
	bbsort(vetA,5000);
	end = time(NULL);
	printf ("\nTempo gasto para ordenar 5000 numeros: %.2f \n",difftime(end,start));
	for (i=0;i<5000;i++)
		fprintf (OrdA,"%5d ",vetA[i]);
	//Ordenar, calcular tempo e imprimir o Vetor B
	start = time(NULL); 	
	bbsort(vetB,10000);
	end = time(NULL);
	printf ("\nTempo gasto para ordenar 10000 numeros: %.2f \n",difftime(end,start));
	for (i=0;i<10000;i++)
		fprintf (OrdB,"%5d ",vetB[i]);
	//Ordenar, calcular tempo e imprimir o Vetor C
	start = time(NULL);	
	bbsort(vetC,2000);
	end = time(NULL);
	printf ("\nTempo gasto para ordenar 20000 numeros: %.2f \n",difftime(end,start));
	for (i=0;i<20000;i++)
		fprintf (OrdC,"%5d ",vetC[i]);
	//Ordenar, calcular tempo e imprimir o Vetor D
	start = time(NULL); 
	bbsort(vetD,30000);
	end = time(NULL);
	printf ("\nTempo gasto para ordenar 30000 numeros: %.2f \n",difftime(end,start));
	for (i=0;i<30000;i++)
		fprintf (OrdD,"%5d ",vetD[i]);
	fclose (A);
	fclose (B);
	fclose (C);
	fclose (D);
	fclose (OrdA);
	fclose (OrdB);
	fclose (OrdC);
	fclose (OrdD);
	return 0;
}
void bbsort (int *vet[], int TAM)
{
	int i,j,swap;
	for (i=0;i<TAM;i++)
		for (j=0;j<TAM-1;j++)
			if (vet[j]>vet[j+1])
			{
				swap=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]=swap;
			}
}
	