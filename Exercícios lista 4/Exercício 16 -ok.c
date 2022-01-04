/* 16) Considere um número inteiro n (n ≥ 0) lido pelo teclado. Faça um algoritmo
recursivo para calcular o fatorial de n. */

#include <stdio.h>

int fat (int n);

int main ()
{
	int n;
	printf ("\nDigite um numero para calculo do fatorial: ");
	scanf ("%d", &n);
	printf ("\nFatorial de %d = %d\n\n",n,fat(n));
	return 0;
}
int fat (int n)
{
	int fatorial;
	if (n==0)
		return 1;
	else fatorial=n*fat(n-1);
	return fatorial;
}