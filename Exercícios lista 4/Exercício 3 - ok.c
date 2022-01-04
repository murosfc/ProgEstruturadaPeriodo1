/* 3) Considere uma struct que armazena as coordenadas x e y de um ponto no R2. Faça
um algoritmo que leia as coordenadas de dois pontos e imprima a distância entre eles.
Utilize um procedimento para ler as coordenadas dos pontos e uma função para
retornar (para a função main) a distância entre eles.*/

#include <stdio.h>
#include <math.h>

struct coordenadas
{
	float x,y;
};

void ler (struct coordenadas *cord);
float calcula_dist (struct coordenadas *cord);

int main ()
{
	struct coordenadas *cord[2];
	ler(cord);
	printf ("\nDistancia entre os pontos: %.2f\n\n",calcula_dist(cord));
	return 0;	
}
void ler (struct coordenadas *cord)
{
	int i;
	for (i=0;i<2;i++)
	{
	printf ("\nDigite a coordenada x do ponto %d: ",i+1);
	scanf ("%f",&cord[i].x);
	printf ("\nDigite a coordenada y do ponto %d: ",i+1);
	scanf ("%f",&cord[i].y);
	}
}
float calcula_dist (struct coordenadas *cord)
{
	float dist;
	dist = sqrt (pow((cord[1].x-cord[0].x),2)+pow((cord[1].y-cord[0].y),2));
	return dist;
}