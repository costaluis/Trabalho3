#include "trab3.h"

int main(int argc, char const *argv[])
{
	int matriz = 0;
	int opcao;
	int linhas;
	int colunas;
	int i = 0;
	elemento *A = calloc(1,sizeof(elemento));
	elemento *B = A;
	
	while(1){
		system("clear");
		printf("Digite a opcao desejada:\n");
		printf("1 - Criar matriz\n");
		printf("2 - Remover matriz\n");
		printf("3 - Incluir elemento\n");
		printf("4 - Consultar elemento\n");
		printf("5 - Somar linha/coluna\n");
		printf("6 - Fechar programa\n");
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
				if(matriz == 0){
					matriz = adicao(&linhas,&colunas);
					pausa();
				}else{
					printf("Matriz ja criada!\n");
					pausa();
				}
				break;
			case 2:
				if(matriz == 1){
					matriz = rem(A);
					pausa();
				}else{
					printf("Matriz nao existente!\n");
					pausa();
				}
				break;
			case 3:
				if(matriz==1){
					B = incele(B,&i,linhas,colunas);
					pausa();
				}else{
					printf("Matriz nao existente!\n");
					pausa();
				}
				break;
			case 4:
				if(matriz==1){
					consulta(A,linhas,colunas);
					pausa();
				}else{
					printf("Matriz nao existente!\n");
					pausa();
				}
				break;
			case 5:
				if(matriz==1){
					soma(A,linhas,colunas);
					pausa();
				}else{
					printf("Matriz nao existente!\n");
					pausa();
				}
				break;
			case 6:
				if(matriz == 1){
					matriz = rem(A);
					return 0;
				}else{
					return 0;
				}
				break;
			default:
				printf("Valor Invalido!\n");
				pausa();
		}
	}
}