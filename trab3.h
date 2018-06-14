#include <stdio.h>
#include <stdlib.h>

typedef struct elemento
{
	int linha;
	int coluna;
	float valor;
	struct elemento *prox;
	struct elemento *ant;
}elemento;

int adicao(int *,int *);
elemento* incele(elemento*, int *);
