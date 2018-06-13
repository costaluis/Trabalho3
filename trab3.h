#include <stdio.h>
#include <stdlib.h>

typedef struct elemento
{
	int linha;
	int coluna;
	int valor;
	struct elemento *prox;
	struct elemento *ant;
}elemento;

int adicao(int *,int *);