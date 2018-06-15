#include "trab3.h"

void eleadd(elemento *A,int maxlinha,int maxcoluna){
	system("clear");
	while(1){
		printf("Insira a linha do elemento: ");
		scanf("%d",&A->linha);
		if(A->linha>=0 && A->linha<maxlinha){
			break;
		}else{
			printf("Valor Invalido!\n");
		}
	}
	system("clear");
	while(1){
		printf("Insira a coluna do elemento: ");
		scanf("%d",&A->coluna);
		if(A->coluna>=0 && A->coluna<maxcoluna){
			break;
		}else{
			printf("Valor Invalido!\n");
		}
	}	
	printf("Insira o valor do elemento: ");
	scanf("%f",&A->valor);
}

elemento* incele(elemento *A,int *i,int maxlinha,int maxcoluna){
	if(*i==0){
		eleadd(A,maxlinha,maxcoluna);
		*i=1;
		return A;
	}
	else{
		elemento *B = A;
		A->prox = (elemento*) calloc(1,sizeof(elemento));
		A = A->prox;
		A->ant = B;
		eleadd(A,maxlinha,maxcoluna);
		return A;
	}
}