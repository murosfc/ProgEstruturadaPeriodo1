#include <stdio.h>

int calc_pot (int a, int b);
int main ()
{
	int a,b;
	printf ("\nDigite o valor de a= ");
	scanf ("%d",&a);
	printf ("\nDigite um valor maior que zero para b= ");
	do
	{
		scanf ("%d",&b);
	}
	while (b<=0);
	printf ("\na^b= %d\n\n",calc_pot(a,b));
	return 0;
}
int calc_pot (int a, int b)
{
	if (b==0)
		return 1;
	else if (b==1)
		return a;
	else return calc_pot (a,b-1)*a;
}
	
