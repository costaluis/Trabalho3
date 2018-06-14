#include "trab3.h"

int adicao(int *A, int *B){
	//Comando para adicionar uma nova matriz
	system("clear");
	while(1){
		printf("Digite o numero de linhas da matriz: ");
		scanf("%d",A);
		if(*A>0){
			break;
		}
		else{
			printf("Valor Invalido!\n");
		}
	}
	system("clear");
	while(1){	
		printf("Digite o numero de colunas da matriz: ");
		scanf("%d",B);
		if(*B>0){
			break;
		}
		else{
			printf("Valor Invalido\n");
		}
	}
	return 1;
}