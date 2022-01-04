#include <stdio.h>
#include <time.h>

void main()
{
	int i=0, cont=1;
	FILE *A,*B,*C,*D;
	A=fopen ("A.txt","w");
	B=fopen ("B.txt","w");
	C=fopen ("C.txt","w");
	D=fopen ("D.txt","w");
	srand (time(NULL));
	for (i=0;i<5000;i++)
	{
		fprintf (A,"%d ",rand () %10000 +1);
		cont++;
		if (cont == 100)
		{
			fprintf (A,"\n");
			cont=1;
		}
	}
	cont=1;
	for (i=0;i<10000;i++)
	{
		fprintf (B,"%d ",rand () %10000 +1);
		if (cont == 100)
		{
			fprintf (B,"\n");
			cont=1;
		}
	}
	cont=1;
	for (i=0;i<20000;i++)
	{
		fprintf (C,"%d ",rand () %10000 +1);
			if (cont == 100)
		{
			fprintf (C,"\n");
			cont=1;
		}
	}
	cont=1;
	for (i=0;i<30000;i++)
	{
		fprintf (D,"%d ",rand () %10000 +1);
			if (cont == 100)
		{
			fprintf (D,"\n");
			cont=1;
		}
	}
	fclose (A);
	fclose (B);
	fclose (C);
	fclose (D);
}