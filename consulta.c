#include "trab3.h"

void consulta(elemento *A,int maxlinha,int maxcoluna){
	int linha;
	int coluna;

	system("clear");
	while(1){
		printf("Digite a linha do elemento a ser consultado: ");
		scanf("%d",&linha);
		if(linha>=0 && linha<maxlinha){
			break;
		}else{
			printf("Valor Invalido!\n");
		}
	}
	system("clear");
	while(1){
		printf("Digite a coluna do elemento a ser consultado: ");
		scanf("%d",&coluna);
		if(coluna>=0 && coluna<maxcoluna){
			break;
		}else{
			printf("Valor Invalido!\n");
		}
	}

	system("clear");
	while(A!=NULL){
		if(A->linha==linha && A->coluna==coluna){
			printf("Valor do elemento: %.2f\n",A->valor);
			return;
		}else{
			A = A->prox;
		}
	}
	printf("Valor do elemento: 0.00\n");
	return;
}