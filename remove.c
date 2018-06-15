#include "trab3.h"

int rem(elemento *A){
	elemento *B;
	while(A!=NULL){
		B = A;
		free(A);
		A = B->prox;
	}
	return 0;
}