#include <stdio.h>
#include <stdlib.h>

#define vert 10

void ler (int digrafo[][vert]);
void cec3 (int digrafo[][vert]);

int main()
{
	int digrafo[vert][vert];
	ler (digrafo);
	cec3 (digrafo);
	return 0;	
}
void ler (int digrafo[][vert])
{
	int i,j;
	printf ("\nDigite as interacoes dos vertices: ");
	for (i=0;i<vert;i++)
		for (j=0;j<vert;j++)
		{
			if (i==j)
			    digrafo[i][j]=0;
			else
			{
			    printf ("\nVertice %d e %d: ",i+1,j+1);
			    scanf ("%d",&digrafo[i][j]);
			}
		}
}
void cec3 (int digrafo[][vert])
{
	int i,j, cec[4],jA,iaux,k;
	printf ("\nCiclos elementares de comprimento 3 presentes em D: ");
	for (i=0;i<vert;i++)
		for (j=0;j<vert;j++)
		{
			if (digrafo[i][j]==1)
			{
				cec[0]=i+1;
				cec[1]=j+1;
				jA=j;				
				for (iaux=0;iaux<vert;iaux++)
				{
					if (digrafo[jA][iaux]==1 && digrafo[iaux][i]==1)
					{
						cec[2]=iaux+1;
						cec[3]=i+1;
						for (k=0;k<4;k++)
						{
							printf ("%d",cec[k]);
							if (k<3)
								printf ("-");
							else printf (";");
						}
					}
				}
			}
		}					
} 