#include "trab3.h"

int main(int argc, char const *argv[])
{
	int matriz = 0;
	int linhas;
	int colunas;
	elemento *A = calloc(1,sizeof(elemento));
	elemento *B = A;
	
	matriz = adicao(&linhas,&colunas);
	return 0;
}