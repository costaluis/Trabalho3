#include "trab3.h"

int main(int argc, char const *argv[])
{
	int matriz = 0;
	char c;
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
		printf("5 - Fechar programa\n");
		scanf("%d",opcao);
		switch(opcao){
			case 1:
				if(matriz == 0){
					matriz = adicao(&linhas,&colunas);
					printf("Tecle enter para continuar...\n");
					getchar(c);
				}else{
					printf("Matriz ja criada!\n");
					printf("Tecle enter para continuar...\n");
					getchar(c);
				}
			case 2:
				if(matriz == 1){
					matriz = remove(A);
					printf("Tecle enter para continuar...\n");
					getchar(c);
				}else{
					printf("Matriz nao existente!\n");
					printf("Tecle enter para continuar...\n");
					getchar(c);
				}
			case 3:
				B = incele(B,i,linhas,colunas);
				printf("Tecle enter para continuar...\n");
				getchar(c);
			case 4:
				consulta(A,linhas,colunas);
				printf("Tecle enter para continuar...\n");
				getchar(c);
			case 5:
				if(matriz == 1){
					matriz = remove(A);
					return 0;
				}else{
					return 0;
				}
			default:
				printf("Valor Invalido!\n");
				printf("Tecle enter para continuar...\n");
				getchar(c);
		}
	}
}