#include "trab3.h"

void eleadd(elemento *A){
	system("clear");
	printf("Insira a linha do elemento: ");
	scanf("%d",A->linha);
	printf("Insira a coluna do elemento: ");
	scanf("%d",A->coluna);
	printf("Insira o valor do elemento: ");
	scanf("%f",A->valor);
}

elemento* incele(elemento *A,int i){
	if(i==0){
		eleadd(A);
		return A;
	}
	else{
		elemento *B = A;
		A->prox = (elemento*) calloc(1,sizeof(elemento));
		A = A->prox;
		A->ant = B;
		eleadd(A);
		return A;
	}
}