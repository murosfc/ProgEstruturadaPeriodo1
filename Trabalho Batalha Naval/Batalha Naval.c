/* Cada jogador tem um campo de tamanho 6 x 6, sendo constituído, portanto, de 36 blocos.
 Em cada campo há 4 navios escondidos (um em cada bloco), que são determinados aleatoriamente. 
 O objetivo de cada jogador é descobrir onde estão os 4 navios do outro jogador e acertá-los. 
 A cada tiro dado (indicação de uma linha e uma coluna) é dito se o jogador acertou algum navio. 
 O jogo só acaba quando um jogador descobrir e afundar todos os navios do outro jogador. 
 Obs.: Todas as etapas do jogo têm que ser armazenadas no arquivo Batalha.txt. */
 #include <time.h>
 #include <stdio.h>
 #include <stdlib.h>
 
 void fillmat (int mat[6][6], FILE *arq);
 int jogar (int p1[6][6], int p2[6][6], FILE *arq);
 int confere (int mat[6][6],int i, int j, FILE *arq);
 
 int main ()
 {
 	int Player1[6][6],Player2[6][6];
 	FILE *arqsaida;
 	arqsaida = fopen ("Batalha.txt","w");
 	fprintf (arqsaida,"Campo gerado para o Jogador 1: \n");
 	fillmat (Player1, arqsaida);
 	fprintf (arqsaida,"\nCampo gerado para o Jogador 2: \n");
 	fillmat (Player2, arqsaida);
 	printf ("\nVencedor Jogador %d\n\n",jogar(Player1,Player2,arqsaida));
 	fprintf (arqsaida,"\nVendedor Jogador %d\n\n",jogar(Player1,Player2,arqsaida));
 	fclose (arqsaida);
 	return 0;
 }
 
void fillmat (int mat[6][6], FILE *arq)
{
	int contnavio=0,i,j;
	srand(time(NULL)+rand());
	for (i=0;i<6;i++)
	{
		for (j=0;j<6;j++)
			mat[i][j]=0;
	}
	while (contnavio<5)
	{
		i=rand()%5;
		j=rand()%5;
		if (mat[i][j]==0)
		{
			mat[i][j]=1;
			contnavio++;
		}
	}
	for (i=0;i<6;i++)
	{
		for (j=0;j<6;j++)
			fprintf (arq, "%d ",mat[i][j]);
	}
}

int jogar (int p1[6][6], int p2[6][6], FILE *arq)
 {
 	bool jogador=true; //True para jogador 1 e false para jogador 2
 	int contacertos1=0,contacertos2=0,x,y,player;
 	char aux1[6][6],aux2[6][6];
 	for (x=0;x<6;x++)
 		for (y=0;y<6;y++)
		 {
		 	aux1[x][y]={'-'};
		 	aux2[x][y]={'-'};
		 }
 	while (contacertos1 <4 || contacertos2  <4)
 	{
	 if (jogador)
	 {
	 	player=1;
	 }	 
	 else player=2;
	 printf ("\nJogador %d digite a coordenada x (espaco) e y do seu palpite.\nLembre-se x e y variam de 1 a 6\n",player);
	 scanf ("%d %d",&x,&y);
	 while (x>6 || y>6 || x<1 || y<1)
	 {
	 	printf ("\nCoordenadas invalidas, tente novamente\n");
	 	printf ("\nJogador %d digite a coordenada x (espaco) e y do seu palpite.\nLembre-se x e y variam de 1 a 6\n",player);
	 	scanf ("%d %d",&x,&y);
	 }
	 if (jogador)
	 {
	 	if (confere(p2,x-1,y-1,arq)==1)
		 {
		 	aux1[x-1][y-1]={'X'};
		 	contacertos1++;
		 } else aux1[x-1][y-1]={'0'};
		 printf ("\nSeu resultado parcial:\n");
		 for (x=0;x<6;x++)
	 		for (y=0;y<6;y++)
			 {
			 	printf ("%c ",aux1[x][y]);
			 	if (y==5)
			 		printf("\n");
			 }
			 printf ("\nAcertos = %d\n",contacertos1);
	 }	else{	 
	 	 	 if (confere(p1,x-1,y-1,arq)==1)
			 {
			 	aux2[x-1][y-1]={'X'};
			 	contacertos2++;
			 } else aux2[x-1][y-1]={'0'};
			 printf ("\nSeu resultado parcial:\n");
			 for (x=0;x<6;x++)
		 		for (y=0;y<6;y++)
				 {
				 	printf ("%c ",aux2[x][y]);
				 	if (y==5)
			 		printf("\n");
				 }
				 printf ("\nAcertos = %d\n",contacertos2);
	 }
	 jogador=!jogador;     
	 }	
 	if (contacertos1 == 4)
 		return 1;
 	else return 2;
 }
 int confere (int mat[6][6],int i, int j, FILE *arq)
 {
 	if (mat[i][j]==1)
	 {
	 	printf ("\nNo alvo, voce marcou um ponto\n");
		return 1;
	 }
 	else
	 {
		printf ("\nTiro na agua\n");
		return 0;	
	 }
 }