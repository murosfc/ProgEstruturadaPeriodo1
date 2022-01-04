#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
	int vet[7],vel_palp[7],i=0;
	srand(time(NULL));
	printf ("*********************************************************\n");
	printf ("*                                                       *\n");
	printf ("*            BEM VINDO AO JOGO DA MEMORIA               *\n");
	printf ("*                                                       *\n");
	printf ("*********************************************************\n");
	printf ("nInstruções: Voce vera na tela 7 numeros em sequencia, \nmemorize-os para em seguida digita-los na mesma ordem");
	printf ("\n\nPressione qualquer tecla para iniciar\n");
	system ("PAUSE");
	system ("CLS");
	printf ("Preparado?\n");
	printf ("Regressiva: ");
	for (i=5;i>=0;i++)
	{
	printf ("%d",i);
	sleep(1000);
	system ("clear");
	}
	return 0;
}
