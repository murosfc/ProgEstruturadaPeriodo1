/* Grupo: Felipe Muros, Gabriel Paes, Gabriel Siqueira, Lucas Rangel, Yves Muniz. Jogo da memória.
3) Jogo da Memória (1 jogador)
O computador deve apresentar na tela 7 números distintos (gerados aleatoriamente de 1 até
50) durante 5 segundos. O jogador deve tentar digitar tais números na ordem em que os
mesmos aparecem.
Obs.: Todas as etapas do jogo têm que ser armazenadas no arquivo Memoria.txt.
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void gerar_vetor (int vet[7], FILE *log_jogo_mem); //procedimento para gerar o vetor
void ler_palpites (int vet_palp[7],int vet[7], FILE *log_jogo_mem); //procedimento para ler o palpite do usuário
int resultado(int vet[7], int vet_palp[7]); //função para informar o resultado

int main()
{
	int vet[7],vet_palp[7],i=0,aux=0, jogar_novamente=1;
	srand (time(NULL));
	FILE *log_jogo_mem;
	log_jogo_mem=fopen("Memoria.txt","w");
	if (log_jogo_mem == NULL)
	{
		printf ("\nErro na abertura do aqruivo\n\n");
		return 0;
	}
	while (jogar_novamente==1)
	{
		//Bloco cabeçalho para impressão no arquivo
		system ("clear");		
		fprintf (log_jogo_mem,"*********************************************************\n");
		fprintf (log_jogo_mem,"*                                                       *\n");
		fprintf (log_jogo_mem,"*            BEM VINDO AO JOGO DA MEMORIA               *\n");
		fprintf (log_jogo_mem,"*                                                       *\n");
		fprintf (log_jogo_mem,"*********************************************************\n");
		fprintf (log_jogo_mem,"\nInstrucoes: Voce vera na tela 7 numeros em sequencia, \nmemorize-os para em seguida digita-los na mesma ordem\n");
		fprintf (log_jogo_mem,"\nApos voce pressionar alguma tecla, \nvoce vera um contagem regressiva de 5 segundos.\nEntao os numeros serao exibidos na tela por apenas 5s\n\n");
		//Bloco cabeçalho para impressão na tela
		printf ("*********************************************************\n");
		printf ("*                                                       *\n");
		printf ("*            BEM VINDO AO JOGO DA MEMORIA               *\n");
		printf ("*                                                       *\n");
		printf ("*********************************************************\n");
		printf ("\nInstrucoes: Voce vera na tela 7 numeros em sequencia, \nmemorize-os para em seguida digita-los na mesma ordem\n");
		printf ("\nApos voce pressionar alguma tecla, vera um contagem regressiva de 5 segundos\nEntao os numeros serao exibidos na tela por apenas 5s\n\n");
		getchar();
		system ("clear");
		fprintf (log_jogo_mem,"Contagem regressiva: ");
		for (i=5;i>=0;i--) //contador dos 5 segundos, com exibição na tela
		{			
			printf ("%d\n",i); //imprime os segundos na tela
			sleep(1);
			fprintf (log_jogo_mem,"%d, ",i); //imprime os segundos no arquivo
			system ("clear"); //limpa a tela para imprimir o proximo segundo na contagem regressiva	
		}
		system ("clear"); 
		fprintf (log_jogo_mem,"\n\n"); //imprime duas quebras de linha no arquivo        		
		gerar_vetor(vet, log_jogo_mem); //camada do procedimento para gerar e exibir o vetor aleatorio
		ler_palpites(vet_palp,vet, log_jogo_mem); //camada do procedimento para ler palpites do usuário
		switch (resultado(vet,vet_palp)) //chama a funcao que calcula o resultado e avalia o desempenho
		{
			case 7:
			printf ("\nVoce acertou 100 por cento. O mestre da memorizacao. Parabens!\n"); //imprime o resultado na tela
			fprintf (log_jogo_mem,"\nVoce acertou 100 por cento. Parabéns!\n"); //imprime o resultado no arquivo
			break;
			case 6:
			printf ("\nVoce acertou 85 por cento. Na proxima vai!\n"); //imprime o resultado na tela
			fprintf (log_jogo_mem,"\nVoce acertou 85 por cento. Na proxima vai!\n"); //imprime o resultado no arquivo
			break;
			case 5:
			printf ("\nVoce acertou 71 por cento. Quase! Da pra melhorar um pouco mais.\n"); //imprime o resultado na tela
			fprintf (log_jogo_mem,"\nVoce acertou 71 por cento. Quase! Da pra melhorar um pouco mais.\n");//imprime o resultado no arquivo
			break;
			case 4:
			printf ("\nVoce acertou 57 por cento. Mais que a metade! Continue praticando.\n"); //imprime o resultado na tela
			fprintf (log_jogo_mem,"\nVoce acertou 57 por cento. Mais que a metade! Continue praticando.\n");//imprime o resultado no arquivo
			break;			
			case 3:
			printf ("\nVoce acertou 43 por cento. Quase a metade! Continue praticando.\n"); //imprime o resultado na tela
			fprintf (log_jogo_mem,"\nVoce acertou 43 por cento. Quase a metade! Continue praticando.\n");//imprime o resultado no arquivo
			break;
			case 2:
			printf ("\nVoce acertou 28 por cento. Nao e um bom resultado, pratique um pouco mais.\n"); //imprime o resultado na tela
			fprintf (log_jogo_mem,"\nVoce acertou 28 por cento. Nao e um bom resultado, continue praticando.\n");//imprime o resultado no arquivo
			break;
			case 1:
			printf ("\nVoce acertou 14 por cento. Quase nada heim. Precisa praticar muito.\n"); //imprime o resultado na tela
			fprintf (log_jogo_mem,"\nVoce acertou 14 por cento. Quase nada heim. Precisa praticar muito.\n");//imprime o resultado no arquivo
			break;
			case 0:
			printf ("\nVoce nao acertou nenhuma. voce entendeu o jogo?\n"); //imprime o resultado na tela
			fprintf (log_jogo_mem,"\nVoce nao acertou nenhuma. Entendeu o jogo?\n"); //imprime o resultado no arquivo
			break;
		}
		printf ("\nDigite 1 para jogar novamente.\n");
		fprintf (log_jogo_mem,"\nDigite 1 para jogar novamente.\n");
		scanf ("%d",&jogar_novamente); //Joga novamente se o usuário digitar 1	
		fprintf (log_jogo_mem,"Valor digitado pelo usuario: %d\n\n",jogar_novamente);
		system ("clear");
	}
	printf ("\nObrigado por jogar! Te aguardamos para uma proxima rodada.\n\n");
	fprintf (log_jogo_mem,"\nObrigado por jogar! Te aguardamos para uma proxima rodada.\n\n");
	fclose(log_jogo_mem);
	return 0;
}
void gerar_vetor (int vet[7], FILE *log_jogo_mem)	
{
	int i=0,aux=0;	
	for (i=0;i<7;i++)
	{
		vet[i]=rand()% 50 +1; //gera o vetor com valores aleatorios de 1 a 50
		printf ("%d ",vet[i]); //imprime o vetor na tela
		fprintf (log_jogo_mem,"%d ",vet[i]); //imprime o vetor no arquivo
	}	
}
void ler_palpites (int vet_palp[7],int vet[7], FILE *log_jogo_mem)
{
	int i=0;
	printf ("\n");
	sleep(5); //Aguarda 5 segundos após exibição do números na tela
	system ("clear"); //Apaga da tela os numeros exibidos apos os 5 segundos
	printf ("\nDigite os numeros na ordem em que foram exibidos na tela:\n");
	fprintf (log_jogo_mem,"\n\nDigite os numeros na ordem em que foram exibidos na tela:\n");
	for (i=0;i<7;i++) // lê os palpites do usuário e grava no vetor e no arquivo
	{
		printf ("\nPosicao %d: ",i+1);		
		scanf ("%d",&vet_palp[i]);
		if (vet_palp[i]!=vet[i])
		{
			printf ("\a");	
			fprintf (log_jogo_mem,"\nPosicao %d: %d - Errou",i+1,vet_palp[i]);
		}
		else fprintf (log_jogo_mem,"\nPosicao %d: %d - Acertou",i+1,vet_palp[i]);		
	system ("clear");
	}
}
int resultado(int vet[7], int vet_palp[7])
{
	int conta_certos=0,i=0;
	for (i=0;i<7;i++)
	{
		if (vet_palp[i]==vet[i]) //Compara cada posição do vetor exibido na tela com o digitado pelo usuário
		{
			conta_certos++; // conta a quantidade de acertos
		}
	}
	return conta_certos; // retorna a quantidade de acertos para a função main
}