#include "trab3.h"

void soma(elemento *A, int maxlinha, int maxcoluna){
	int linha;
	int coluna;
	float soma=0;
	int r;
	while(1){
		printf("Voce deseja somar uma:\n");
		printf("1 - Linha\n");
		printf("2 - Coluna\n");
		scanf("%d",&r);
		if(r==1 ׀׀ r==2){
			break;
		}else{
			printf("Valor Invalido!\n");
		}
	}
	system("clear");
	if(r == 1){
		while(1){
			printf("Digite a linha a ser somada: ");
			scanf("%d",&linha);
			if(linha>=0 && linha<maxlinha){
				break;
			}else{
				printf("Valor Invalido!\n");
			}
		}
		while(A!=NULL){
			soma += A->valor;
			A = A->prox;
 		}
 		printf("Resultado da soma: %f\n",soma);
	}else{
		while(1){
			printf("Digite a coluna a ser somada: ");
			scanf("%d",&coluna);
			if(coluna>=0 && coluna<maxcoluna){
				break;
			}else{
				printf("Valor Invalido!\n");
			}
		}
		while(A!=NULL){
			soma += A->valor;
			A = A->prox;
		}
		printf("Resultado da soma: %f\n",soma);
	}
}