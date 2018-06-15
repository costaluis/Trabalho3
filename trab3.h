#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

typedef struct elemento
{
	int linha;
	int coluna;
	float valor;
	struct elemento *prox;
	struct elemento *ant;
}elemento;

int adicao(int *,int *);
elemento* incele(elemento*, int *,int,int);
int rem(elemento *);
void soma(elemento*, int, int);
void consulta(elemento*,int,int);
