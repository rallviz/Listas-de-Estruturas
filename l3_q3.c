#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, j, tamanho, total; 
	int soma = 0;
//recebe do usuário dimensões da matriz
	printf("Insira as dimensoes da matriz: ");
	scanf("%d", &tamanho);
	printf("-----------------------------\n");
//tamanho a ser informado pelo usuário
	int mat[tamanho][tamanho];

	printf("Insira o valor de cada posicao: \n");
//percorrendo a matriz
	for(i=0;i<tamanho;i++){ 
        for(j=0;j<tamanho;j++){
            scanf("%d", &mat[i][j]);
		}
    }

	printf("\n");
//somando da diagonal principal
    for(i=0;i<tamanho;i++){ 
        soma += mat[i][i];
    }
    printf("A soma da diagonal principal eh: %d\n", soma);
    total = soma; //salva a soma da diagonal principal na variável total

    soma = 0; //atribuindo 0 novamente ao conteudo da variavel para reutilização
    for(i=0;i<tamanho;i++){ //somando a diagonal secundária
        soma += mat[i][tamanho - 1 - i];
    }
    printf("E da diagonal secundaria eh: %d\n", soma);
//validação
    if(total != soma){
        printf("Nao eh um quadrado magico \n"); 
	}
//somando linhas
    for(i=0;i<tamanho;i++){ 
        soma = 0; //atribuindo para reutilizar depois
        for(j=0;j<tamanho;j++){
            soma += mat[i][j];
		}
//validação das linhas
        if(total != soma){ 
            printf("Nao eh um quadrado magico \n");
        }else{
			printf("A soma da linha [%d] eh: %d\n", i+1, soma);
		}
    }
//somando colunas
    for(j=0;j<tamanho;j++){
        soma = 0;
        for(i=0;i<tamanho;i++){
            soma += mat[i][j];
		}
        if(total != soma){ //validação das colunas
            printf("Nao eh um quadrado magico \n");
        }else{
			printf("Soma da coluna [%d]: %d\n", j+1, soma); //imprimindo resultado
		}
    }

    if(total == soma){ //resultado final
            printf("\nEh um quadrado magico \n");
        }

    return 0;
}