/*
Faça um algoritmo que simule uma pilha de, no máximo, 60 livros. Um livro
somente poderá ser incluído e removido no topo da lista. O nome da cada livro pode ter,
no máximo, 15 letras (considerando os espaços). Crie um menu para o usuário
selecionar de cada vez uma das seguintes funcionalidades: (1) Inserir Livro; (2)
Remover Livro; e (3) Listar Livros. Crie e utilize um procedimento para cada
funcionalidade. Caso o usuário não queira mais inserir, remover e/ou listar os livros
inseridos, o mesmo deve digitar a opção: (4) Sair.
*/

#include <stdio.h>
#include <stdlib.h>

void insert (int *index,char pilha[][15]);
void remover (int *index,char pilha[][15]);
void list (int index,char pilha[][15]);

int main ()
{
	char stack[60][15];
	int index=-1,option;
	do
	{
	printf ("\nEscolha uma das opcoes:\n1 - Inserir livro\n2 - Remover livro\n3 - Listar Livros\n4 - Sair\n");
	scanf ("%d",&option);
	switch (option)
	{
		case 1:
		if (index==59)
		    printf ("\nApilha ja esta cheia, remova um livro antes de adicionar novo\n");
		else insert(&index,stack);
		break;
		case 2:
		if (index<0)
		    printf ("\nApilha ja esta vazia, insira um livro antes de remover\n");
		else remover(&index,stack);
		break;
		case 3:
		list(index,stack);
		break;
		case 4:
		printf ("\nObrigado por utilizar este programa");
		return 0;
	}
	}
	while (1);
	return 0;
}
void insert (int *index,char pilha[][15])
{
	system ("clear");
	printf ("\nDigite o nome do livro que deseja colocar na pilha: \n");
	scanf (" %[^\n]s",&pilha[*index+1][0]);
	*index+=1;
}
void remover (int *index,char pilha[][15])
{
	system ("clear");
	printf ("\nVoce removeu o livro: %s da pilha",pilha[*index]);
	*index-=1;
}
void list (int index,char pilha[][15])
{
	system ("clear");
	int i=0;
	printf ("\nPilha atual de livros:\n");
	for (i=0;i<=index;i++)
		printf ("%s\n",pilha[i]);
}


	
