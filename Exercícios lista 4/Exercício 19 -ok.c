/* 19) Na Série de Fibonacci os dois primeiros elementos são conhecidos (1 e 1), sendo
que os demais são gerados a partir da soma dos dois anteriores. Por exemplo, os dez
primeiros elementos da Série são: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.
Faça um algoritmo recursivo para imprimir o elemento da posição n (n ≥ 1) dessa
Série. Exemplos: se o usuário digitar n = 1 (ou seja, a primeira posição), deve ser
impresso o número 1. Se o usuário digitar n = 6 (ou seja, a sexta posição), deve ser
impresso o número 8. */

#include <stdio.h>

int sfibonacci (int n);

int main ()
{
	int n;
	printf ("\nDigite o numero do elemento da Serie Fibonacci que deseja imprimir na tela: ");
	scanf ("%d",&n);
	printf ("\nO elemento %d da Serie Fibonacci eh: %d\n\n",n,sfibonacci(n));
	return 0;
}
int sfibonacci (int n)
{
	if (n==1)
		return 1;
	else if (n==2)
		return 1;
	else return (sfibonacci(n-1)+sfibonacci(n-2));
}
	